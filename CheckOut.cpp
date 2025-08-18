//
// Created by Windows 10 on 8/14/2025.
//

#include "CheckOut.h"
using namespace std;
#include <iostream>
#include "string"

void CheckOut::checkout() {
    cout << "Do you want to check out?"<<endl;
    string first_answer;
    cin>>first_answer;
    if (first_answer == "yes") {
        cout << "Amount of money you need to pay is ===> 500$"<< endl;
    }else {
        return;
    }
}
