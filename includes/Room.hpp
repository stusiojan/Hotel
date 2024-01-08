//

#pragma once

class Room {
    private:
        int roomNumber;
        int roomSize;
        int roomPrice;
        bool isAvailable;
    public:
        Room(int roomNumber, int roomSize, int roomPrice, bool isAvailable);

        int getRoomNumber();
        int getRoomSize();
        int getRoomPrice();
        bool getIsAvailable();

        void setRoomNumber(int roomNumber);
        void setRoomSize(int roomSize);
        void setRoomPrice(int roomPrice);
        void setIsAvailable(bool isAvailable);
};