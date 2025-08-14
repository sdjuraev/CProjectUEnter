//
// Created by Macbook M1 Pro 16 on 8/12/25.
//

#include "Menu.h"
#include <iostream>

#include "Search.h"
using namespace std;
Menu::Menu(Rooms* rooms, Rooms* end)
{
    this->r = rooms;
    this->e = end;
}

void Menu::display()
{
    int option;
    cout << "Welcome to Pandora Hotel" << endl;
    cout<< "1. Search rooms\n"
           "2. Cancel rooms\n"
           "3. Check-out\n"
           "4. Check-in\n"
           "5. Service\n"
           "0. Exit\n";
    cin >> option;
    switch(option)
    {
    case 1:
        {
            Search search(r,e);
            search.showSearch();
        }
        break;
    case 2:
        cout << "Case 2" << endl;
        break;
    case 3:
        cout << "Case 3" << endl;
        break;
    case 4:
        cout << "Case 4" << endl;
        break;
    case 5:
        cout << "Case 5" << endl;
        break;
    case 6:
        exit(0);


    }
}
