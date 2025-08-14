


#include <iostream>


#include "Menu.h"
#include "Person.h"
#include "Search.h"
#include "Rooms.h"
#include "Search2.h"

using namespace std;


int main()
{
 vector<Rooms> rooms;
 Rooms r1 = Rooms(111, "Eco",true, 333, 1);
 Rooms r2 = Rooms(112, "Eco",false, 333, 2);
 Rooms r3 = Rooms(113, "Eco",true, 333, 3);
 Rooms r4 = Rooms(114, "Eco",false, 333, 4);
 Rooms r5 = Rooms(115, "Eco",true, 333, 2);
 rooms.push_back(r1);
 rooms.push_back(r2);
 rooms.push_back(r3);
 rooms.push_back(r4);
 rooms.push_back(r5);
 while (true)
 {
  Menu menu(rooms.data(), rooms.data()+rooms.size());
  menu.display();
 }


}
