//
// Created by Macbook M1 Pro 16 on 8/14/25.
//

#include "Search2.h"
#include "Search.h"

#include <iostream>
#include <ctime>
Search2::Search2(vector<Rooms> rooms)
{
    this->rooms = rooms;
}

void Search2::showSearch()
{

    int person;
    cout <<"Enter number of person";
    cin >> person;
    vector<Rooms> list = getRooms(person);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list.at(i).getRoomNumber() << " "<<list.at(i).getRoomStyle()<<" "<<list.at(i).getBookingPrice()<< endl;
    }
    string answer;
    while (true)
    {
        cout << "Do you want to book and check in ?" << endl;
        cin >> answer;
        if (answer == "yes")
        {
            int roomNumber;
            cout << "Enter number of room";
            cin >> roomNumber;
            book(roomNumber);
            showAllSearch();

        }else{

        }
    }




}
vector<Rooms> Search2::getRooms(int person)
{
    vector<Rooms> avalable;
    for (Rooms room : rooms)
    {
        if (room.getStatus() && room.getPersonNumber()>=person)
        {
            avalable.push_back(room);
        }
    }
    return avalable;
}
void Search2::book(int roomNumber) {
    for (Rooms &room: rooms) {
        if (room.getRoomNumber()==roomNumber) {
            room.setStatus(false);
        }

    }
}
void Search2::showAllSearch() {
    for (Rooms &room: rooms) {
        cout<< room.getRoomNumber()<<" "<<room.getStatus()<<endl;
    }
}