//
// Created by Windows 10 on 8/14/2025.
//



#include <iostream>
#include <string>


#include "Service.h"
#include <iostream>

Service::Service(Rooms* rooms, Rooms* end) {
    this->rooms = rooms;
    this->end = end;
    currentRoom = -1;
    service.insert({"Osh", 45000});
    service.insert({"Somsa", 10000});
    service.insert({"Manti", 10000});
    service.insert({"Shashlik", 20000});
    service.insert({"Cleaning", 10000});

}

void Service::showServiceMenu() {
    std::cout << "\n=== Hotel Services ===\n";
    std::cout << "Enter your room number: ";
    std::cin >> currentRoom;

    if (!isRoomBooked(currentRoom)) {
        std::cout << "Room not found or not booked.\n";
        return;
    }

    int choice;
    std::cout << "1. Order Food\n";
    std::cout << "2. Request Room Cleaning\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) {
        orderFood();
    } else if (choice == 2) {
        requestCleaning();
    } else {
        std::cout << "Invalid choice.\n";
    }
}

bool Service::isRoomBooked(int roomNumber) {
    //new comment
    for (Rooms* ptr = rooms; ptr != end; ++ptr) {
        if (ptr->getRoomNumber() == roomNumber && !ptr->getStatus()) {
            return true;
        }
    }
    return false;
}

void Service::orderFood() {
    int select;
    std::cout << "Enter your food orders:\n";
    int counter = 1;
    for (auto & menu:service)
    {
        cout << counter<<". " << menu.first << "\t" << menu.second << endl;
        counter++;
    }
    //orderFoodRecursive();

    // std::cout << "\n Orders placed for Room " << currentRoom << ":\n";
    // for (auto& item : foodOrders) {
    //     std::cout << "- " << item << "\n";
    // }
    std::cout << "Enter choice: ";
    std::cin >> select;

}

void Service::orderFoodRecursive() {
    std::string foodItem;
    std::getline(std::cin, foodItem);

    if (foodItem == "done") return;

    foodOrders.push_back(foodItem);
    orderFoodRecursive();
}

void Service::requestCleaning() {
    std::cout << "Cleaning request for Room " << currentRoom << " has been scheduled.\n";
}