//abstract class

#pragma once

#include <string>
#include <unordered_map>
#include <vector>

class Employee{
    protected:
        std::string name;
        std::string surname;
        int id;
        int salary;
        enum class Position{
            cleaner,
            clerk,
            cook,
            waiter
        };
        std::unordered_map<Position, std::vector<std::string>> duties; //moze std::vector<std::string>?

        Employee(std::string name, std::string surname, int id, int salary, std::unordered_map<Position, std::vector<std::string>> duties);
    public:
        std::string getName();
        std::string getSurname();
        int getId();
        int getSalary();
        std::unordered_map<Position, std::vector<std::string>> getDuties();

        virtual void setName(std::string name);
        virtual void setSurname(std::string surname);
        virtual void setId(int id);
        virtual void setSalary(int salary);
        virtual void setDuties(std::unordered_map<Position, std::vector<std::string>> duties);

        virtual void doDuty(Position position) = 0;
};