/*
   Author: Easton Sherwood
   Date: 2/19/2025
   Description: This program generates a random number 1-50 and then will either
    declare it is not a prime number or find the factorial if it is a prime number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    srand(time(0));
    char choice;
    do {
        int num = rand() % 50;
        cout << "Generated number: " << num << endl;

        if (isPrime(num)) {
            cout << num << " is a prime number." << endl;
            cout << "Factorial of " << num << " is: " << factorial(num) << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }

        cout << "Do you want to repeat? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
