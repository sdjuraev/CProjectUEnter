//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Search.h"

#include <iostream>
#include <ctime>
Search::Search(Rooms *rooms, Rooms *end)
{
    this->rooms=rooms;
    this->end=end;
}

void Search::showSearch()
{

    int person;
    cout <<"Enter number of person ";
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

        }
        return;
    }
}
vector<Rooms> Search::getRooms(int person)
{
    vector<Rooms> avalable;
    Rooms *ptr = rooms;
    for (; ptr!=end; ptr++)
    {
        if (ptr->getStatus()&& ptr->getPersonNumber()>=person)
        {

            avalable.push_back(*ptr);
        }
    }
    return avalable;
}
void Search::book(int roomNumber)
{
    Rooms *ptr = rooms;

    for (; ptr!=end; ++ptr)
    {
        if (ptr->getRoomNumber()==roomNumber)
        {
            ptr->setStatus(false);
            cout <<"Room number "<< ptr->getRoomNumber()<<" is booked successfully "<<endl;
            return;
        }
    }
}
void Search::showAllRooms()
{
    Rooms *ptr = rooms;
    for (; ptr!=end; ptr++)
    {
        cout <<ptr->getRoomNumber()<<" "<<ptr->getStatus()<<endl;
    }
}
void Search::cancelRoom()
{
    int roomNumber;
    cout << "Which booking do you want to cancel ?\n Enter room number: " << endl;
    cin >> roomNumber;
    Rooms *ptr = rooms;
    for (; ptr!=end; ptr++)
    {
        if (ptr->getRoomNumber()==roomNumber)
        {
            ptr->setStatus(true);
        }
    }
}


