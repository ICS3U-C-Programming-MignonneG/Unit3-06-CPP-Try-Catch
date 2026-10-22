// Copyright (c) 2026 Mignonne Gihozo All rights reserved.
//
// Created by: Mignonne Gihozo
// Created on: Oct 2026
// This program uses a try statement

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;

    // generate a random number from 0 to 9
    std::random_device rdevice;
    std::mt19937 generator(rdevice());
    std::uniform_int_distribution<int> distribution(0, 9);
    int randomNumber = distribution(generator);

    // input
    std::cout << "Enter a integer from 0 to 9: ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);

        if (integerAsNumber == randomNumber) {
            std::cout << "You guessed the number correctly!\n";
        } else {
            std::cout << "You entered the integer incorrectly!\n";
            std::cout << "The correct number was: " << randomNumber << ".\n";
        }
    } catch (std::invalid_argument) {
        std::cout << integerAsString << " is not a valid integer!\n";
        std::cout << "The correct number was: " << randomNumber << ".\n";
    }
}
