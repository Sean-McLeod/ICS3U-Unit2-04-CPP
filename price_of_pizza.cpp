// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can calculate the cost of a pizza when the user enters
//    the diameter of their pizza

#include <iostream>
#include <iomanip>

int main()  {
    // This function calculates the cost of a pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;


    // input
    std::cout << "Enter the diameter of the pizza (inch):" << std::endl;
    std::cin >> diameter;

    // process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The total price of a " << diameter << " inch pizza is $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << std::endl;
}
