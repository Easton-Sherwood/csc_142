#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len = 0.0, double wid = 0.0) 
        : length(len), width(wid) {}

    double getLength() const
    {
        return length;
    }

    double getWidth() const
    {
        return width;
    }

    void setLength(double len)
    {
        if (len > 0)
        {
            length = len;
        }
        else
        {
            std::cout << "Please enter a valid length greater than 0.\n";
        }
    }

    void setWidth(double wid)
    {
        if (wid > 0)
        {
            width = wid;
        }
        else
        {
            std::cout << "Please enter a valid width greater than 0.\n";
        }
    }

    double getArea() const
    {
        return length * width;
    }

    void display() const
    {
        std::cout << "Rectangle dimensions: " 
                  << "\nLength: " << length 
                  << " meters"
                  << "\nWidth: " << width 
                  << " meters"
                  << "\nArea: " << std::fixed << std::setprecision(2) << getArea() 
                  << " square meters\n";
    }
};

#endif
