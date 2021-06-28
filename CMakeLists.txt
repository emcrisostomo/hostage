cmake_minimum_required(VERSION 3.15)
project(hostage VERSION 1.0.1)

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

set(CMAKE_CXX_STANDARD 11)
include(CheckIncludeFileCXX)

add_executable(hostage
    src/main.cpp
    gen/hosts_lexer.cpp gen/hosts_lexer.h
    gen/hosts.cpp gen/hosts.h
    src/parser/command_parser.cpp src/parser/command_parser.h
    src/parser/hosts_file_parser.cpp src/parser/hosts_file_parser.h
    src/hosts.cpp src/hosts.h
    src/hosts_line.cpp src/hosts_line.h)

find_package(antlr4-runtime QUIET)

if (${antlr4-runtime_FOUND})
  add_dependencies(hostage antlr4_shared)
else()
  find_library(antlr4_shared NAMES antlr4-runtime REQUIRED)
  # TODO: hard-coded include directory
  target_include_directories(hostage PRIVATE "/usr/include/antlr4-runtime")

  target_link_libraries(hostage PRIVATE ${antlr4_shared})
endif()

target_include_directories(hostage PRIVATE "${PROJECT_BINARY_DIR}")

# add runtime include directories on this project.
target_include_directories(hostage PRIVATE ${ANTLR4_INCLUDE_DIR})

# Add a configuration file processed by cmake
configure_file(${PROJECT_SOURCE_DIR}/cmake_config.h.in ${PROJECT_BINARY_DIR}/cmake_config.h)
add_definitions(-DHAVE_CMAKE_CONFIG_H)

# install targets
install(TARGETS hostage DESTINATION bin)

# tests
include(CTest)

add_test(hostageRuns hostage)
set_tests_properties(hostageRuns PROPERTIES WILL_FAIL true)

add_test(hostageHelp hostage --help)
set_tests_properties(hostageHelp PROPERTIES PASS_REGULAR_EXPRESSION "${PACKAGE} ${PACKAGE_VERSION}")

# installer
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