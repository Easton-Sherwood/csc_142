/*
   Author: Easton Sherwood
   Date: 2/19/2025
   Description: This program generates 1000 random numbers ranginign from 1-100 and then will either
    compile the amount of odd and even number and display the totals at the end.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to check if a number is even
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    srand(time(0)); // Seed for random number generation
    
    int totalNumbers = 1000;
    int evenCount = 0, oddCount = 0;
    
    for (int i = 0; i < totalNumbers; i++) {
        int randomNum = rand() % 101; // Generate a number between 0 and 100
        
        if (isEven(randomNum)) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    cout << "========================================\n";
    cout << "Random Number Analysis Report\n";
    cout << "========================================\n";
    cout << "Total numbers generated: " << totalNumbers << "\n";
    cout << "Even numbers count    : " << evenCount << " (" << (evenCount * 100.0 / totalNumbers) << "% of total)\n";
    cout << "Odd numbers count     : " << oddCount << " (" << (oddCount * 100.0 / totalNumbers) << "% of total)\n";
    cout << (evenCount > oddCount ? "There were more evens numbers" : "There were more odds numbers") << "\n";

    
    return 0;
}
