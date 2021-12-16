// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 2021
// This program uses a compound boolean statement to see if the user
// can date the grandchild
#include <iostream>

int main() {
    // this function uses a compound boolean statement
    std::string userWealthInput;
    std::string userLooksInput;

    // input
    std::cout << "Are you rich?(y/n): ";
    std::cin >> userWealthInput;

    std::cout << "Are you handsome?(y/n): ";
    std::cin >> userLooksInput;

    // process & output
    if (userWealthInput == "y" || userWealthInput == "Y"
        || userLooksInput == "y" || userLooksInput == "Y") {
        std::cout << "You can date our grandchild \n";
        std::cout << "\033[1;35;38mThanks for playing";
    } else if (userWealthInput == "n" || userWealthInput == "N"
            || userLooksInput == "n" || userLooksInput == "N") {
        std::cout << "Please look for someone else to date \n";
        std::cout << "\033[1;35;38mThanks for playing";
    } else {
      std::cout << "Please enter either y/n \n";
      std::cout << "\033[1;35;38mThanks for playing";
    }
}
