//

#pragma once

#include <vector>
#include "Room.hpp"
#include "Reservation.hpp"
#include "Guest.hpp"
#include "Clerk.hpp"


class Hotel {
    private:
        std::vector<Room> rooms;
        std::vector<Reservation> reservations;
        std::vector<Guest> guests;
        std::vector<Employee> employees;
        std::vector<Room> occupiedRooms;
        std::string name;

    public:
        Hotel(std::string name);

        std::vector<Room> getRooms();
        std::vector<Reservation> getReservations();
        std::vector<Guest> getGuests();
        std::vector<Employee> getEmployees();
        std::vector<Room> getOccupiedRooms();
        std::string getName();

        void setRooms(std::vector<Room> rooms);
        void setReservations(std::vector<Reservation> reservations);
        void setGuests(std::vector<Guest> guests);
        void setEmployees(std::vector<Employee> employees);
        void setOccupiedRooms(std::vector<Room> occupiedRooms);
        void setName(std::string name);

        void addRoom(Room room);
        // void addReservation(Reservation reservation);
        void addGuest(Guest guest);
        //void addEmployee(Employee employee);
        void addOccupiedRoom(Room room);

        void removeRoom(Room room);
        // void removeReservation(Reservation reservation);
        void removeGuest(Guest guest);
        //void removeEmployee(Employee employee);
        void removeOccupiedRoom(Room room);

        void checkIn(Guest guest, Room room);
        void checkOut(Guest guest, Room room);
        void makeReservation(Guest guest, Room room);
        void cancelReservation(Guest guest, Room room);
};