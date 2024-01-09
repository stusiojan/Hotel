//

#pragma once

#include "Employee.hpp"

class Clerk: public Employee {
    public:
        Clerk(std::string name, std::string surname, int id, int salary);
        void doDuty() override;
};