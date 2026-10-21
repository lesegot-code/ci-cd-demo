cmake_minimum_required(VERSION 3.14)
project(hello_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(greet_lib src/greet.cpp)
target_include_directories(greet_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(hello_app src/main.cpp)
target_link_libraries(hello_app PRIVATE greet_lib)

enable_testing()
include(GoogleTest)

add_executable(test_greet tests/test_greet.cpp)
target_link_libraries(test_greet PRIVATE greet_lib GTest::gtest_main)
gtest_discover_tests(test_greet)

add_executable(test_greet_logic tests/test_greet_logic.cpp)
target_link_libraries(test_greet_logic PRIVATE greet_lib GTest::gtest_main)
gtest_discover_tests(test_greet_logic)
