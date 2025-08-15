//
// Created by Macbook M1 Pro 16 on 8/14/25.
//

#include "Cancel.h"
using namespace std;
#include <iostream>
void Cancel::showCancelMenu()
{
    int answer;
    cout << "Do you want to cancel the book?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> answer;
    if (answer == 1)
    {
        cout <<"Enter room number";
        cin >> answer;

    }else
    {
        return;
    }
}
