cmake_minimum_required(VERSION 3.15)
project(hostage VERSION 0.0.1)

#@formatter:off
set(PACKAGE           "hostage")
set(PACKAGE_NAME      "${PACKAGE}")
set(PACKAGE_VERSION   "${PROJECT_VERSION}-develop")
set(PACKAGE_STRING    "${PACKAGE_NAME} ${PACKAGE_VERSION}")
set(PACKAGE_AUTHOR    "enrico.m.crisostomo@gmail.com")
set(PACKAGE_BUGREPORT "${PACKAGE_AUTHOR}")
set(PACKAGE_TARNAME   "${PACKAGE}")
set(PACKAGE_URL       "https://github.com/emcrisostomo/${PACKAGE}")
set(LOCALEDIR         "${CMAKE_INSTALL_PREFIX}/share/locale" CACHE FILEPATH "locale dir")
#@formatter:on

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH /opt/local/lib/cmake/antlr4)
find_package(antlr4-runtime REQUIRED)

add_executable(hostage
    main.cpp
    gen/hostsLexer.h gen/hostsLexer.cpp
    gen/hostsParser.h gen/hostsParser.cpp
    hosts_listener.cpp hosts_listener.h)

# add runtime include directories on this project.
target_include_directories(hostage PRIVATE ${ANTLR4_INCLUDE_DIR})
add_dependencies(hostage antlr4_shared)
target_link_libraries(hostage PRIVATE antlr4_shared)