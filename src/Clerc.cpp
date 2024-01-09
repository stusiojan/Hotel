
#include "Clerk.hpp"
#include <iostream>

Clerk::Clerk(std::string name, std::string surname, int id, int salary)
    : Employee(name, surname, id, salary) {}

void Clerk::doDuty() {
    std::cout << "Clerk named" + getName() + " did his duties";
}