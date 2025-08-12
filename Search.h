//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef SEARCH_H
#define SEARCH_H
#include <vector>

#include "Rooms.h"


class Search {
    std::vector<Rooms> rooms;
public:Rooms getRooms(int roomNumber);
public:Rooms getRooms();
    public:void showSearch();

};



#endif //SEARCH_H
