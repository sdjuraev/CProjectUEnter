//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Rooms.h"
Rooms::Rooms(int roomNumber, string roomStyle,
    bool status, double bookingPrice, int personNumber,
    time_t checkIn, map<string, double> service)
{
    this->roomNumber = roomNumber;
    this->roomStyle = roomStyle;
    this->status = status;
    this->bookingPrice = bookingPrice;
    this->personNumber = personNumber;
    this->checkInTime = checkIn;
    this->service = service;
}

int Rooms::getRoomNumber()
{
    return roomNumber;
}
bool Rooms::getStatus()
{
    return status;
}
int Rooms::getPersonNumber()
{
    return personNumber;
}
string Rooms::getRoomStyle()
{
    return roomStyle;
}
double Rooms::getBookingPrice()
{
    return bookingPrice;
}
void Rooms::setStatus(bool status)
{
    this->status = status;
}
