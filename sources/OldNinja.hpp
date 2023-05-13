//
// Created by yuvalbs on 5/11/23.
//

//OldNinja נעות במהירות 8. נוצרות עם 150 נקודות פגיעה.
#ifndef INC_4TASKA_OLDN
#define INC_4TASKA_OLDN

#include "Ninja.hpp"

using namespace std;
namespace ariel {

    class OldNinja : public Ninja {
    public:
        OldNinja(const string name, const Point location);

        OldNinja();// Empty Constructor (compiler said this is must )
//        int speed;
//        int hits;
    };

}
#endif //INC_4TASKA_OLDN
