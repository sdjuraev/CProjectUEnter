//
// Created by Macbook M1 Pro 16 on 8/14/25.
//

#include "CheckOut.h"

void CheckOut::checkout() {
    cout << "Do you want to check out?"<<endl;
    string first_answer;
    cin>>first_answer;
    if (first_answer == "yes") {
        cout << "Amount of money you need to pay is ===> 500$"<< endl;
    } else
    {
        return;
    }
}