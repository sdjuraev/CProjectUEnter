//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef ROOMS_H
#define ROOMS_H
#include <string>

#include "Service.h"

using namespace std;
class Rooms {
    private:int roomNumber;
private:string roomStyle;
private:bool status;
private:double bookingPrice;
private:int personNumber;
private:time_t checkInTime;
private:map<string, double> service;

public:Rooms(int roomNumber, string roomStyle, bool status, double bookingPrice, int personNumber, time_t checkIn, map<string, double> service);

    int getRoomNumber();
    bool getStatus();
    int getPersonNumber();
    string getRoomStyle();
    double getBookingPrice();
    void setStatus(bool status);
};




#endif //ROOMS_H
