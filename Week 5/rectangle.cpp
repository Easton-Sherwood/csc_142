#include <iostream>
#include <iomanip> 
#include "Rectangle.h" 

using namespace std;

int main() {
    double length, width;

    Rectangle kitchen, bedroom, livingRoom;

    cout << "Enter kitchen length: ";
    cin >> length;
    kitchen.setLength(length);

    cout << "Enter kitchen width: ";
    cin >> width;
    kitchen.setWidth(width);

    cout << "Enter bedroom length: ";
    cin >> length;
    bedroom.setLength(length);

    cout << "Enter bedroom width: ";
    cin >> width;
    bedroom.setWidth(width);

    cout << "Enter living room length: ";
    cin >> length;
    livingRoom.setLength(length);

    cout << "Enter living room width: ";
    cin >> width;
    livingRoom.setWidth(width);

    cout << "\nKitchen: "
         << "L=" << kitchen.getLength() << "m, "
         << "W=" << kitchen.getWidth() << "m, "
         << "A=" << fixed << setprecision(2) << kitchen.getArea() << "m^2\n";
    
    cout << "Bedroom: "
         << "L=" << bedroom.getLength() << "m, "
         << "W=" << bedroom.getWidth() << "m, "
         << "A=" << fixed << setprecision(2) << bedroom.getArea() << "m^2\n";
    
    cout << "Living Room: "
         << "L=" << livingRoom.getLength() << "m, "
         << "W=" << livingRoom.getWidth() << "m, "
         << "A=" << fixed << setprecision(2) << livingRoom.getArea() << "m^2\n";
    
    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    cout << "\n-- Total Area --\n"
         << "Total: " << fixed << setprecision(2) << totalArea << "m^2\n";
    

    return 0;
}
