//
// Created by yuvalbs on 5/11/23.
//

#include "Point.hpp"
Point::Point(const double& x, const double& y)
{
    this->x = x;
    this->y = y;
}
//Empty constructor
Point::Point()
{
    this->x = 0;
    this->y = 0;
}
double Point::distance(Point otherPoint){
    return 0;
}

void Point::print(){
    cout << "Legendary" << endl;
}

Point Point::moveTowards(Point source, Point destination, double distance){
    return Point();
}
double Point::getX(){
    return this->x;
}

double Point::getY(){
    return this->y;
}