// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if a number is associated with a month

#include <iostream>
#include <string>

int monthNumber;

int main() {
    // Finds if a number is associated with a month

    std::cout << "Enter a month number: ";
    std::cin >> monthNumber;
    std::cout << std::endl;
    std::string month;
    switch (monthNumber) {
    case 1:
        month = "January";
        break;
    case 2:
        month = "February";
        break;
    case 3:
        month = "March";
        break;
    case 4:
        month = "April";
        break;
    case 5:
        month = "May";
        break;
    case 6:
        month = "June";
        break;
    case 7:
        month = "July";
        break;
    case 8:
        month = "August";
        break;
    case 9:
        month = "September";
        break;
    case 10:
        month = "October";
        break;
    case 11:
        month = "November";
        break;
    case 12:
        month = "December";
        break;
    default:
        month = "nothing";
        break;
    }
    std::cout << std::endl;
    std::cout << "The month number for ";
    std::cout << monthNumber << " is " << month << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
