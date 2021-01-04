// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program converts celsius into fahrenheit

#include <iostream>
#include <string>


void Fahrenheit() {
    // this function converts celsius into fahrenheit

    // variable declarations
    int fahrenheitTemp;
    std::string celsiusTemp;
    int celsiusTempInt;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusTemp;
    std::cout << "" << std::endl;

    // process
    try {
        celsiusTempInt = std::stoi(celsiusTemp);

        fahrenheitTemp = (9 * celsiusTempInt) / 5 + 32;

        // output
        std::cout << celsiusTempInt << "°C is equal to " << fahrenheitTemp
                  << "°F " << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That's not a temperature! Try again." << std::endl;
    }
}

int main() {
    // this function calls other functions

    // fahrenheit function
    Fahrenheit();
}
