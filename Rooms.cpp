//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Rooms.h"
Rooms::Rooms(int roomNumber, string roomStyle,
    bool status, double bookingPrice, int personNumber)
{
    this->roomNumber = roomNumber;
    this->roomStyle = roomStyle;
    this->status = status;
    this->bookingPrice = bookingPrice;
    this->personNumber = personNumber;

   // this->service = map<string, double>();
}
Rooms::Rooms(int roomNumber, string roomStyle, bool status, double bookingPrice)
{
    this->roomNumber = roomNumber;
    this->roomStyle = roomStyle;
    this->status = status;
    this->bookingPrice = bookingPrice;
    this->personNumber = 0;
    //this->service = map<string, double>();
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
