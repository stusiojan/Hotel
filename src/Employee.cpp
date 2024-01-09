#include "Employee.hpp"

Employee::Employee(std::string name, std::string surname, int id, int salary)
    : name(std::move(name)), surname(std::move(surname)), id(id), salary(salary) {}

std::string Employee::getName() {
    return name;
}

std::string Employee::getSurname() {
    return surname;
}

int Employee::getId() {
    return id;
}

int Employee::getSalary() {
    return salary;
}

void Employee::setName(std::string newName) {
    name = std::move(newName);
}

void Employee::setSurname(std::string newSurname) {
    surname = std::move(newSurname);
}

void Employee::setId(int newId) {
    id = newId;
}

void Employee::setSalary(int newSalary) {
    salary = newSalary;
}
