//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Search.h"

#include <iostream>
#include <ctime>
Search::Search(vector<Rooms> rooms)
{
    this->rooms = rooms;
}

void Search::showSearch()
{

    int person;
    cout <<"Enter number of person";
    cin >> person;
    vector<Rooms> list = getRooms(person);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list.at(i).getRoomNumber() << " "<<list.at(i).getRoomStyle()<<list.at(i).getPersonNumber()<< endl;
    }



}
vector<Rooms> Search::getRooms(int person)
{
    vector<Rooms> avalable;
    for (Rooms room : rooms)
    {
        if (room.getStatus() && room.getPersonNumber()==person)
        {
            avalable.push_back(room);
        }
    }
    return avalable;
}
