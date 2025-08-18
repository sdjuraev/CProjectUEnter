//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef ROOMS_H
#define ROOMS_H
#include <string>


#include "ctime"

using namespace std;
class Rooms {
    private:int roomNumber;
private:string roomStyle;
private:bool status;
private:double bookingPrice;
private:int personNumber;

//private:map<string, double> service;

public:
    Rooms(int roomNumber, string roomStyle, bool status, double bookingPrice, int personNumber);
Rooms(int roomNumber, string roomStyle, bool status, double bookingPrice);
    int getRoomNumber();
    bool getStatus();
    int getPersonNumber();
    string getRoomStyle();
    double getBookingPrice();
    void setStatus(bool status);
};




#endif //ROOMS_H
