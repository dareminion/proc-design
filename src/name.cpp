#include <iostream>
#include <string>

std::string askName() {
    std::string name;
    std::cout <<"What is your name? ";
    std::cin >> name;
    return name;
}