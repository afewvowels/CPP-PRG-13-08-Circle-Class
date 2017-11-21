//
//  Circle.cpp
//  CPP-PRG-13-08-Circle-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle()
{
    dblRadius = 0.0;
}

Circle::Circle(double rad)
{
    dblRadius = rad;
}

void Circle::setRadius(double rad)
{
    dblRadius = rad;
}

double Circle::getRadius() const
{
    return dblRadius;
}

double Circle::getArea() const
{
    return (pi * dblRadius * dblRadius);
}

double Circle::getDiameter() const
{
    return (2 * dblRadius);
}

double Circle::getCircumference() const
{
    return (2 * pi * dblRadius);
}
