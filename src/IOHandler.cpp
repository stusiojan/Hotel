#include "IOHandler.hpp"
#include "Clerk.hpp"
// #include "Cook.hpp"
// #include "Waiter.hpp"
// #include "Cleaner.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>

void IOHandler::readEmployeesFromFile(const std::string& filename, std::vector<std::unique_ptr<Employee>>& employees) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name, surname, positionStr;
        int id, salary;
        iss >> name >> surname >> id >> salary >> positionStr;

        Position position = positionFromString(positionStr);
        if (position != Position::unknown) {
            std::unique_ptr<Employee> employee = createEmployee(name, id, salary, position);
            if (employee) {
                employees.push_back(std::move(employee));
            }
        }
    }

    file.close();
}

std::unique_ptr<Employee> IOHandler::createEmployee(const std::string& name, int id, int salary, Position position) {
    switch (position) {
        case Position::clerk:
            return std::make_unique<Clerk>(name, id, salary);
        // case Position::cook:
        //     return std::make_unique<Cook>(name, id, salary);
        // case Position::waiter:
        //     return std::make_unique<Waiter>(name, id, salary);
        // case Position::cleaner:
        //     return std::make_unique<Cleaner>(name, id, salary);
        default:
            std::cerr << "unknown position." << std::endl;
            return nullptr;
    }
}

Position IOHandler::positionFromString(const std::string& positionStr) {
    if (positionStr == "Clerk") {
        return Position::clerk;
    } else if (positionStr == "Cook") {
        return Position::cook;
    } else if (positionStr == "Waiter") {
        return Position::waiter;
    } else if (positionStr == "Cleaner") {
        return Position::cleaner;
    } else {
        std::cerr << "unknown position string: " << positionStr << std::endl;
        return Position::unknown;
    }
}