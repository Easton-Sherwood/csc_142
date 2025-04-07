/*
   Author: Easton Sherwood
   Date: 2/7/2025
   Description: This program takes the price and adds the tax amount to it.
*/

#include <iostream>
#include <string>
#include <sstream>

const double TAX_RATE = 0.06; // 6% sales tax 

int main() {
    bool keepGoing = true;
    std::string input;
    
    while (keepGoing) {
        std::string PurchaseDescription;
        std::string costString;
        double cost, totalCost;
        
        std::cout << "Enter a description of the purchase: ";
        std::getline(std::cin, PurchaseDescription);
        
        std::cout << "Enter the purchase cost in dollars and cents: ";
        std::getline(std::cin, costString);
        
        std::stringstream costStream(costString);
        costStream >> cost;
        
        totalCost = cost + (cost * TAX_RATE);
        
        std::cout << "Purchase: " << PurchaseDescription << std::endl;
        std::cout << "Cost before tax: $" << cost << std::endl;
        std::cout << "Total cost after tax: $" << totalCost << std::endl;
        
        std::cout << "Would you like to enter another purchase? (yes/no): ";
        std::getline(std::cin, input);
        
        if (input != "yes") {
            keepGoing = false;
        }
    }
    
    std::cout << "Thank you for shoping at Walmart." << std::endl;
    return 0;
}
