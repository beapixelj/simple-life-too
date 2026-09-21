cmake_minimum_required(VERSION 3.20)

project(SimpleLifeToo
    VERSION 0.1.0
    DESCRIPTION "Simple Life Too (SLT) decentralized digital currency"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(SLT_BUILD_TESTS "Build SLT tests" ON)

add_subdirectory(src)

if(SLT_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
