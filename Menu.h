//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#ifndef MENU_H
#define MENU_H
#include "Rooms.h"


class Menu {
    private:Rooms *r;
    Rooms *e;
    public:void display();
    Menu(Rooms *rooms, Rooms * end);

};



#endif //MENU_H
