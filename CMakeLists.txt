cmake_minimum_required(VERSION 3.15)
project(hostage)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH /opt/local/lib/cmake/antlr4)
find_package(antlr4-runtime REQUIRED)

add_executable(hostage main.cpp gen/hostsLexer.h gen/hostsLexer.cpp gen/hostsParser.h gen/hostsParser.cpp hosts_listener.cpp hosts_listener.h)

# add runtime include directories on this project.
target_include_directories(hostage PRIVATE ${ANTLR4_INCLUDE_DIR} )
add_dependencies(hostage antlr4_shared)
target_link_libraries(hostage PRIVATE antlr4_shared)