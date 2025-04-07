/*
   Author: Easton Sherwood
   Date: 2/7/2025
   Description: This program checks every line of a text file and prints it with the line number next to it.
*/

#include <fstream>
#include <iostream>
#include <string>

int main() {

    std::string line;
    int lineNumber = 1;


    std::ifstream infile("test.txt");
    if (!infile) {
        std::cerr << "Error: Unable to open file!\n";
        return 1;
    }
    

    

    while (std::getline(infile, line)) {
        std::cout << lineNumber << ": " << line << std::endl;
        lineNumber++;
    }
    
    infile.close();
    return 0;
}
