//
// Created by yuvalbs on 5/11/23.
//

#include "Character.hpp"
Character::Character(const string name, const Point location)//Constructor
{
    this-> name=name;
    this-> location=location;
}
Character::Character() //Empty Constructor
{

}

bool Character::isAlive()// Is Character alive?== Is Character has more than 0 hits points
{
    return true;
}
double Character::distance(Character &other)//return distance between 2 Characters
{
    return 0;
}
void Character::hit(int hits)//פגע hit מקבל מספר שלם. מחסיר את כמות נקודות הפגיעה המתאים מהדמות. לא מחזיר דבר. –
{

}
string Character::getName()// Return character name
{
    return "";
}
Point Character::getLocation()// Return character location
{
    return Point();
}
string Character::print()
{
    return "";
}
