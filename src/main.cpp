#include "../include/greet.h"

int main() {
    std::string name = get_name();
    print_greeting(name);
    return 0;
}