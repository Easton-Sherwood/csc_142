/*
   Author: Easton Sherwood
   Date: 2/7/2025
   Description: This program gets a random number and makes the user guess it.
*/

#include <iostream>
#include <cstdio>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secret = (std::rand() % 10) + 1;
    int guess;
    std::cout << "Guess a number between 1 and 10: ";

    do {
        std::cin >> guess;

        if (guess < secret) {
            std::cout << "Wrong Number, Try Going Higher: ";
        }
        if (guess > secret) {
            std::cout << "Wrong Number, Try Going Lower: ";
        }
    } while ((guess - secret) * (guess - secret));

    std::cout << "You guessed the right number!";
    return 0;
}







