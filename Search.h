//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef SEARCH_H
#define SEARCH_H
#include <vector>

#include "Rooms.h"


class Search {
private:Rooms * rooms;
public:Search(Rooms *rooms);

public:vector<Rooms> getRooms(int person);
public:void showSearch();
public:void book(int roomNumber);
public:void showAllRooms();

};



#endif //SEARCH_H
