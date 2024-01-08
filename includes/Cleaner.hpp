//

#pragma once

#include "Employee.hpp"

class Cleaner: public Employee {
    public:
        Cleaner(std::string name, int id, int salary);
        void doDuty(Position position) override;
};