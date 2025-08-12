//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Search.h"

#include <iostream>
#include <__ostream/basic_ostream.h>
#include <ctime>

void Search::showSearch()
{
    int days;
    int person;
    time_t enter;
    time_t exit;
    cout <<"Enter number of days";
    cin >> days;
    cout <<"Enter number of person";
    cin >> person;
    cout <<"Enter check-in date";
    cin >> enter;
    cout <<"Enter check-out date";
    cin >> exit;
}
Rooms Search::getRooms(int roomNumber)
{
    for (Rooms room : rooms)
    {
        if (room.getRoomNumber() == roomNumber)
        {
            return room;
        }
    }
}
