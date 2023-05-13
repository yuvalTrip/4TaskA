//
// Created by yuvalbs on 5/11/23.
//

#include "Cowboy.hpp"
namespace ariel {

    Cowboy::Cowboy(const string name, const Point location)//constructor,like:Cowboy *tom = new Cowboy("Tom", a);
    {
        this->name = name;
        this->location = location;
    }

    void Cowboy::shoot(Character *other)//get pointer to the enemy.
    {

    }

    bool Cowboy::hasBoolets()// If there are left any bullets in the cowboy gun
    {
        if (bullets==0)
        {
            return false;// No bullets left
        }
        return true;
    }

    void Cowboy::reload()// Reload the gun with 6 new bullets
    {

    }


}