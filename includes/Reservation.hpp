//

#pragma once

class Reservation {
    private:
        int reservationNumber;
        int roomNumber;
        int guestID;
        int checkInDate;
        int checkOutDate;
        int fullPrice;
    public:
        Reservation(int reservationNumber, int roomNumber, int guestID, int checkInDate, int checkOutDate, int fullPrice);

        int getReservationNumber();
        int getRoomNumber();
        int getGuestID();
        int getCheckInDate();
        int getCheckOutDate();
        int getFullPrice();

        void setReservationNumber(int reservationNumber);
        void setRoomNumber(int roomNumber);
        void setGuestID(int guestID);
        void setCheckInDate(int checkInDate);
        void setCheckOutDate(int checkOutDate);
        void setFullPrice(int fullPrice);
};