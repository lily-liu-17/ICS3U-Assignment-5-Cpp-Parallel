// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will calculate area of parallelogram

#include <iostream>
#include <string>

float CalculateArea(float base, float height) {
    // This function will calculate ill calculate area of parallelogram
    float area = base * height;

    return area;
}

int main() {
    // this is he main function
    float baseUser;
    float heightUser;
    std::string baseUserString;
    std::string heightUserString;

    // input
    std::cout << "Enter the base of the parallelogram (cm) : ";
    std::cin >> baseUserString;
    std::cout << "Enter the length of the parallelogram (cm) : ";
    std::cin >> heightUserString;

    // output
    try {
        baseUser = std::stof(baseUserString);
        heightUser = std::stof(heightUserString);
        // call functions
        float area = CalculateArea(baseUser, heightUser);
        std::cout << "\nThe area of the parallelogram is " << area
        << " cm²." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
