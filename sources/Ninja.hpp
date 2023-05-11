//
// Created by yuvalbs on 5/11/23.
//
#include "Character.hpp"


using namespace std;

namespace ariel{

    class Ninja : public Character{//character is the base class, Ninja is the derived class
    private:
        int speed; // Ninja's speed

    public:
//        Ninja(string name, Point location);
        void move(Character* other); // Get pointer to enemy and move toward him. Move distance equal to his speed
        void slash(Character* other);// Get pointer to enemy
        //שיסוף slash() – – מקבלת מצביע לאוייב. אם הנינג'ה בחיים והאוייב במרחק של פחות ממטר אחד הנינג'ה תגרום לאוייב נזק של 40 נקודות פגיעה. אחרת, לא ייגרם לאוייב כל נזק.
    };
}