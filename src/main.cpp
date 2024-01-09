#include "PseudorandomNumberGenerator.hpp"
#include "IOHandler.hpp"

#include <iostream>
// #include <vector>
// #include <memory>

int main () {
    PseudorandomNumberGenerator generator;
    std::cout << generator.generate(0, 10) << std::endl;
    
    std::vector<std::unique_ptr<Employee>> employees;
    
    IOHandler::readEmployeesFromFile("employees.txt", employees);

    return 0;
};