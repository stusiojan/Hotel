//abstract class

#pragma once

#include <string>
#include <unordered_map>
#include <vector>

enum class Position{
        cleaner,
        clerk,
        cook,
        waiter,
        unknown
    };

class Employee{
    protected:
        std::string name;
        std::string surname;
        int id;
        int salary;
    public:
        Employee(std::string name, std::string surname, int id, int salary);

        std::string getName();
        std::string getSurname();
        int getId();
        int getSalary();

        virtual void setName(std::string name);
        virtual void setSurname(std::string surname);
        virtual void setId(int id);
        virtual void setSalary(int salary);

        virtual void doDuty() = 0;
};