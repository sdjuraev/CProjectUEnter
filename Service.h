//
// Created by Macbook M1 Pro 16 on 8/14/25.
//






#ifndef SERVICE_H
#define SERVICE_H

#include <map>

#include "Rooms.h"
#include <string>
#include <vector>
using namespace std;
class Service {
private:
    Rooms* rooms;
    Rooms* end;
    int currentRoom;
    map<string, double> service;

public:
    Service(Rooms* rooms, Rooms* end);

    void showServiceMenu();
    void orderFood();
    void requestCleaning();

private:
    bool isRoomBooked(int roomNumber);
    void orderFoodRecursive();
};




#endif //SERVICE_H
