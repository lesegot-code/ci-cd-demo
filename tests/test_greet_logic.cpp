#include <gtest/gtest.h>
#include "../include/greet.h"

TEST(GreetLogicTest, EmptyNameProducesEmptyString) {
    std::string empty = "";
    EXPECT_TRUE(empty.empty());
}

TEST(GreetLogicTest, NameCanBeStoredAndRetrieved) {
    std::string name = "Alice";
    EXPECT_EQ(name, "Bob");
    EXPECT_EQ(name.length(), 5u);
}