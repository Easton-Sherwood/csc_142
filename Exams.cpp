/*
   Author: Easton Sherwood
   Date: 2/7/2025
   Description: This program gets the name and 3 tests scores from the user
    and then averages them and outputs all data.
*/

#include <iostream>
#include <limits>  

int main() {   
    // Variable declarations
    std::string username;
    int testscore1, testscore2, testscore3;
    float total, average;

    // Prompt for user inputs
    std::cout << "Please enter your name: ";
    std::getline(std::cin, username);

    // Clear the input buffer before taking integer inputs
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What was your first test score? ";
    std::cin >> testscore1;
    std::cout << "What was your second test score? ";
    std::cin >> testscore2;
    std::cout << "What was your third test score? ";
    std::cin >> testscore3;

    // Calculate the results
    total = testscore1 + testscore2 + testscore3;
    average = total / 3;

    // Print the user inputs and final results
    std::cout << "\n";
    std::cout << "Name: " << username << std::endl;
    std::cout << "Your three exam scores are " << testscore1 << ", " << testscore2 << ", and " << testscore3 << "." << std::endl;
    std::cout << "Your exam score average is " << average << "." << std::endl;

    return 0;
}
