//
//  main.cpp
//  CPP-PRG-13-08-Circle-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a Circle class that has the following member variables:
//
//  * radius - a double
//  * pi - a double initialized with the value 3.14159
//
//  The class should also have the following member functions:
//
//  * Default Constructor - a default constructor that sets radius to 0.0
//  * Constructor - accepts the radius of the circle as an argument
//  * setRadius - a mutator function for the radius variable
//  * getRadius - an accessor function for the radius variable
//  * getArea - returns the area of the circle, which is calculated as
//      area = pi * radius * radius
//  * getDiameter - returns the diameter of the circle, which is calculated as
//      diameter = radius * 2
//  * getCircumference - returns the circumference of the circle, which is calculated as
//      circumference = 2 * pi * radius
//
//  Write a program that demonstrates the Circle class by asking the user for the
//  circle's radius, creating a Circle object, then reporting the circle's area, diameter, and
//  circumference.

#include <iostream>
#include <iomanip>
#include "Circle.hpp"

Circle createCircle();
void displayResults(Circle);

int main()
{
    Circle cirCircle;
    
    cirCircle = createCircle();
    
    displayResults(cirCircle);
    
    return 0;
}

Circle createCircle()
{
    Circle cirCircle;
    
    double dblRadius;
    
    std::cout << "Please enter a radius: ";
    std::cin >> dblRadius;
    while (!std::cin || dblRadius <= 0.0 || dblRadius >= 100.0)
    {
        std::cout << "Please enter a number between 0 and 100: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> dblRadius;
    }
    
    cirCircle.setRadius(dblRadius);
    
    return cirCircle;
}

void displayResults (Circle circle)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    
    std::cout << "Area: " << circle.getArea() << std::endl;
    std::cout << "Diameter: " << circle.getDiameter() << std::endl;
    std::cout << "Circumference: " << circle.getCircumference() << std::endl;
}
