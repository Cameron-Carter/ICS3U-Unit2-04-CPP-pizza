// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program calculates the total price of pizza based on inputted diameter

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates total pizza cost
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;

    float diameter;
    float subtotal;
    float total;

    // Input
    std::cout << "Enter the diameter of your pizza (inches): ";
    std::cin >> diameter;

    // Process
    subtotal = diameter * COST_PER_INCH + LABOR + RENT;
    total = subtotal * HST + subtotal;

    // Output
    std::cout << "A " << std::setfill('0') << diameter << " inch pizza costs $"
        << std::fixed << std::setprecision(2) << std::setfill('1')
    << total << std::endl;
    std::cout << "\nDone." << std::endl;
}
