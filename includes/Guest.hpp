//

#pragma once

#include <string>
#include <chrono>

class Guest{
    private:
        int id;
        std::string name;
        std::string surname;
        std::chrono::system_clock::time_point arrivalTime;
        int stayLength;
        int roomNumber;
    public:
    Guest(int id, std::string name, std::string surname, std::chrono::system_clock::time_point arrivalTime, int stayLength, int roomNumber);

    int getId();
    std::string getName();
    std::string getSurname();
    std::chrono::system_clock::time_point getArrivalTime();
    int getStayLength();
    int getRoomNumber();

    void setId(int id);
    void setName(std::string name);
    void setSurname(std::string surname);
    void setArrivalTime(std::chrono::system_clock::time_point arrivalTime);
    void setStayLength(int stayLength);
    void setRoomNumber(int roomNumber);
};