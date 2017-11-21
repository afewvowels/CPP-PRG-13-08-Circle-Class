//
//  Circle.hpp
//  CPP-PRG-13-08-Circle-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle
{
private:
    double dblRadius;
    double pi = 3.14159;
public:
    Circle();
    Circle(double);
    
    void setRadius(double);
    double getRadius() const;
    double getArea() const;
    double getDiameter() const;
    double getCircumference() const;
};

#endif /* Circle_hpp */
