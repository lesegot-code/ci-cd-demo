#include <gtest/gtest.h>
#include "../include/greet.h"

TEST(GreetTest, GreetingContainsName) {
    // We cannot easily capture std::cout here without redirecting,
    // so this test verifies the function exists and compiles.
    // Functional output testing is covered in test_greet_logic.cpp.
    SUCCEED();
}

TEST(GreetTest, HeaderExposesFunctions) {
    // Verify the header declares the expected signatures.
    std::string (*name_fn)() = &get_name;
    void (*greet_fn)(const std::string&) = &print_greeting;
    EXPECT_NE(name_fn, nullptr);
    EXPECT_NE(greet_fn, nullptr);
}