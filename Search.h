//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef SEARCH_H
#define SEARCH_H
#include <vector>

#include "Rooms.h"


class Search {
private: Rooms * rooms;
private:Rooms * end;

public:Search(Rooms *rooms, Rooms * end);

public:vector<Rooms> getRooms(int person);
public:void showSearch();
public:void book(int roomNumber);
public:void showAllRooms();
    public:void cancelRoom();

};



#endif //SEARCH_H
