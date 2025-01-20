cmake_minimum_required(VERSION 3.15)
project(hostage VERSION 1.0.1 LANGUAGES CXX)

#@formatter:off
set(PACKAGE           "hostage")
set(PACKAGE_NAME      "${PACKAGE}")
set(PACKAGE_VERSION   "${PROJECT_VERSION}")
set(PACKAGE_STRING    "${PACKAGE_NAME} ${PACKAGE_VERSION}")
set(PACKAGE_AUTHOR    "enrico.m.crisostomo@gmail.com")
set(PACKAGE_BUGREPORT "${PACKAGE_AUTHOR}")
set(PACKAGE_TARNAME   "${PACKAGE}")
set(PACKAGE_URL       "https://github.com/emcrisostomo/${PACKAGE}")
set(LOCALEDIR         "${CMAKE_INSTALL_PREFIX}/share/locale" CACHE FILEPATH "locale dir")
#@formatter:on

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CheckIncludeFileCXX)

# Define paths to ANTLR4 and grammar files
set(ANTLR4_JAR_URL "https://www.antlr.org/download/antlr-4.13.2-complete.jar")
set(ANTLR4_JAR_PATH "${CMAKE_BINARY_DIR}/antlr-4.13.2-complete.jar")
set(GRAMMAR_DIR "${CMAKE_SOURCE_DIR}/src/antlr4")
set(GEN_DIR "${CMAKE_BINARY_DIR}/gen")

# Download ANTLR4 JAR file if not already present
if (NOT EXISTS ${ANTLR4_JAR_PATH})
    file(DOWNLOAD ${ANTLR4_JAR_URL} ${ANTLR4_JAR_PATH})
endif()

# Add custom command to generate ANTLR4 files
add_custom_command(
    OUTPUT ${GEN_DIR}/hosts_lexer.cpp ${GEN_DIR}/hosts_lexer.h ${GEN_DIR}/hosts.cpp ${GEN_DIR}/hosts.h
    COMMAND java -jar ${ANTLR4_JAR_PATH} -Dlanguage=Cpp -o ${GEN_DIR} ${GRAMMAR_DIR}/hosts_lexer.g4
    COMMAND java -jar ${ANTLR4_JAR_PATH} -Dlanguage=Cpp -o ${GEN_DIR} -visitor ${GRAMMAR_DIR}/hosts.g4
    DEPENDS ${GRAMMAR_DIR}/hosts_lexer.g4 ${GRAMMAR_DIR}/hosts.g4
    COMMENT "Generating ANTLR4 lexer and parser files"
)

# Add executable and include generated files
add_executable(hostage
    src/main.cpp
    ${GEN_DIR}/hosts_lexer.cpp ${GEN_DIR}/hosts_lexer.h
    ${GEN_DIR}/hosts.cpp ${GEN_DIR}/hosts.h
    src/parser/command_parser.cpp src/parser/command_parser.h
    src/parser/hosts_file_parser.cpp src/parser/hosts_file_parser.h
    src/hosts.cpp src/hosts.h
    src/hosts_line.cpp src/hosts_line.h)

# Find ANTLR4 runtime
find_package(antlr4-runtime REQUIRED)

if (antlr4-runtime_FOUND)
  target_include_directories(hostage PRIVATE ${antlr4-runtime_INCLUDE_DIRS})
  target_link_libraries(hostage PRIVATE antlr4_shared)
else()
  message(FATAL_ERROR "antlr4-runtime not found")
endif()

target_include_directories(hostage PRIVATE "${PROJECT_BINARY_DIR}")

# Add a configuration file processed by cmake
configure_file(${PROJECT_SOURCE_DIR}/cmake_config.h.in ${PROJECT_BINARY_DIR}/cmake_config.h)
add_definitions(-DHAVE_CMAKE_CONFIG_H)

# Install targets
install(TARGETS hostage DESTINATION bin)

# Tests
include(CTest)

add_test(hostageRuns hostage)
set_tests_properties(hostageRuns PROPERTIES WILL_FAIL true)

add_test(hostageHelp hostage --help)
set_tests_properties(hostageHelp PROPERTIES PASS_REGULAR_EXPRESSION "${PACKAGE} ${PACKAGE_VERSION}")

# Installer
include(InstallRequiredSystemLibraries)
#@formatter:off
# Remove and default to project description when migrated to CMake 3.9
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Utility to programmatically edit hosts files.")
set(CPACK_PACKAGE_VERSION_MAJOR       "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR       "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH       "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_VENDOR              "${PACKAGE_AUTHOR}")
set(CPACK_RESOURCE_FILE_LICENSE       "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_GENERATOR                   "STGZ;TGZ")
#@formatter:on
include(CPack)
