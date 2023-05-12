//
// Created by yuvalbs on 5/11/23.
//

#include "doctest.h"
#include "sources/Team.hpp"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <stdexcept>

using namespace std;

namespace ariel;

    TEST_CASE("Point initial"){
        Point a(1.5,4.5),c(1.5,3.5),d(5.5,4.5);
        CHECK(a.getx()== c.getx());
        CHECK(a.gety() == d.gety());
    }

TEST_CASE("Distance checks"){
    Point a(4.15831,1.5),b(2.5,4);
    CHECK(a.distance(b) == b.distance(a)););
    CHECK(a.distance(b) == 3);
}


    TEST_CASE("Cowboy initiation") {
    Point a(1.5, 4.5);
//    Point b(1.3,3.5);
//        Point c(64,57), d(12,81);
    CHECK_NOTHROW(Cowboy * evgeni = new Cowboy("evgeni", a));
    CHECK(evgeni->bullets == 6);
    CHECK(evgeni->hits == 110);
    CHECK("evgeni"==evgeni->getName());
}
/////////////////////////////////////////////////////////////

void testCowboyShoot() {
    // Create a Cowboy and an OldNinja
    Point a(32.3, 44);
    Point b(1.3, 3.5);
    Cowboy tom("Tom", a);
    OldNinja sushi("Sushi", b);

    // Shoot sushi with tom
    tom.shoot(&sushi);

    // Assert that sushi's health is reduced
    CHECK(sushi.getHealth() == 140);// 150-10
}
/////////////////////////////////////////////////////////////

TEST_CASE("Ninjas initiation") {
        Point b(1.3,3.5);
//        Point c(64,57), d(12,81);
    CHECK_NOTHROW(OldNinja *Yehonatan = new OldNinja("Yehonatan", b));

}
/////////////////////////////////////////////////////////////

        CHECK_NOTHROW(YoungNinja("Alina", c));
        CHECK_NOTHROW(TrainedNinja("Herut", d));

        Cowboy *Yvgeni = new Cowboy("Yvgeni", a);

        CHECK_NOTHROW(Team team_A(Yvgeni));

        OldNinja *Amusi = new OldNinja("Amusi", b);
        CHECK("Amusi"==Amusi->getName());

        YoungNinja *Alina = new YoungNinja("Alina", c);
        TrainedNinja *Herut = new TrainedNinja("Herut", d);

        CHECK(Amusi->speed == 8);
        CHECK(Alina->speed == 14);
        CHECK(Herut->speed == 12);

        CHECK(Amusi->hits == 150);
        CHECK(Alina->hits == 100);
        CHECK(Herut->hits == 120);

        CHECK(Alina->getLocation().getX() == c.getX());
        CHECK(Alina->getLocation().getY() == c.getY());
        CHECK(Herut->getLocation().getX() == d.getX());
        CHECK(Herut->getLocation().getY() == d.getY());


    }


    TEST_CASE("Team fights"){
        Point a(1.3,4.5),b(1.3,3.54);
        Point c(64,57), d(12,81);
        Cowboy *Yvgeni = new Cowboy("Yvgeni", a);
        Team team_A(Yvgeni);

        OldNinja *Amusi = new OldNinja("Amusi", b);
        Team team_B(Amusi);

        YoungNinja *Alina = new YoungNinja("Alina", c);
        TrainedNinja *Herut = new TrainedNinja("Herut", d);



        CHECK(Yvgeni->isAlive()==true);
        CHECK(Amusi->isAlive()==true);
        CHECK(Alina->isAlive()==true);
        CHECK(Herut->isAlive()==true);

        team_A.add(Alina);
        team_B.add(Herut);

        CHECK(team_A.stillAlive()==2);
        CHECK(team_B.stillAlive()==2);


        Yvgeni->shoot(Amusi);
        CHECK(Yvgeni->hasBoolets()==true);

        for(int i=0; i<5; i++){
            Yvgeni->shoot(Amusi);
        }
        CHECK(Yvgeni->hasBoolets()==false);

        Yvgeni->reload();

        CHECK(Yvgeni->hasBoolets()==true);

        int beforeSlash = Amusi->hits;

        Amusi->move(Yvgeni);
        Amusi->slash(Yvgeni);

        int afterSlash = Amusi ->hits;

        CHECK(beforeSlash-31==afterSlash);

        while( team_B.stillAlive() > 0){
            team_A.attack(&team_B);
        }

        CHECK(team_B.stillAlive()==0);
        CHECK(team_A.stillAlive()>0);

    }
