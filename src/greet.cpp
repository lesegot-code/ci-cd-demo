#include "../include/greet.h"
#include <iostream>

std::string get_name() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    return name;
}

void print_greeting(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}