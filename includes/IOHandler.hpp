//

#pragma once

#include <vector>
#include <memory>
#include "Employee.hpp"

class IOHandler {
public:
    static void readEmployeesFromFile(const std::string& filename, std::vector<std::unique_ptr<Employee>>& employees);

private:
    static std::unique_ptr<Employee> createEmployee(const std::string& name, int id, int salary, Position position);
    static Position positionFromString(const std::string& positionStr);
};