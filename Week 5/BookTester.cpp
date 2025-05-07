#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include "Book.h"

int main(){
    
    double newPrice;

    Book bOne = Book("013478796X", "Tony Gaddis", 
                "Starting Out With Java: From Control Structures through Data Structures", 
                4, "PE", 118.30);
    
    Book bTwo = Book("0321409493", "John Lewis", 
                "Java Software Solutions: Foundations of Program Design", 
                5, "AW", 94.05);

    Book bThree = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
                12, "PE", 134.84);

                std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
                std::cout << "ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE" << std::endl;
                std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
                bOne.print();
                bTwo.print();
                bThree.print();
                std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
            
    
                return 0;

    


}