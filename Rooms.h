//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef ROOMS_H
#define ROOMS_H
#include <string>

using namespace std;
class Rooms {
    private:int roomNumber;
private:string roomStyle;
private:bool status;
private:double bookingPrice;
private:int personNumber;

public:Rooms(int roomNumber, string roomStyle, bool status, double bookingPrice, int personNumber);

    int getRoomNumber();
    bool getStatus();
    int getPersonNumber();
    string getRoomStyle();
};




#endif //ROOMS_H
