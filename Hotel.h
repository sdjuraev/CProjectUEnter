//
// Created by Macbook M1 Pro 16 on 8/11/25.
//

#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include "Address.h"
#include <vector>

using namespace std;
class Hotel {
public:string name;
private:vector<Address> locations;
public:void addLocation(Address location);

};



#endif //HOTEL_H
