// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program randomly throws dice and says if it gets doubles

#include <iostream>
#include <string>

main() {
    // This is randomly throws die until it gets doubles

    // Defining seed as the time using time(NULL)
    srand(time(NULL));

    // repeater to know number of times it looped
    int repeater = 0;

    // Welcome statement
    std::cout << "Welcome, this is DICE ROLLER." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    while (true) {
        // variables
        int dieZero = rand() % 6 + 1;
        int dieOne = rand() % 6 + 1;

        // prints the two throws
        std::cout << "Roll " << repeater << ": " << dieZero << ", " << dieOne <<
                     std::endl;
        repeater = repeater + 1;

        // check if numbers generated are equal to each other
        if (dieZero == dieOne) {
            // output
            std::cout << "It took " << repeater << " roll(s) to get doubles";
            break;
        }
    }
}
