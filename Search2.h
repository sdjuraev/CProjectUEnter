//
// Created by Macbook M1 Pro 16 on 8/14/25.
//

#ifndef SEARCH2_H
#define SEARCH2_H




// Created by Macbook M1 Pro 16 on 8/12/25.
//


#include <vector>

#include "Rooms.h"


class Search2 {
    std::vector<Rooms> rooms;

public:
    Search2(vector<Rooms> rooms);
    vector<Rooms> getRooms(int person);
    void showSearch();

    void book(int roomNumber);

    void showAllSearch();
};







#endif //SEARCH2_H
