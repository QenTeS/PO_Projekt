

#include <iostream>
#include "World.h"
#include "Organisms.h"
#include "Animal.h"
#include "Wolf.h"
#include "Trawa.h"
#include "Random.h"
using namespace std;

int main()
{
    const int v = 20;
    const int h = 20;
    World world(v,h);
    const int p1 = 5;
    const int p2 = 10;
    world.DrawWorld();
    world.wpisz(5, 10);
    Wolf wolf1;
    Wolf wolf2;
    Wolf wolf3;
    Wolf wolf4;
    Wolf wolf5;
    Organisms* Wilki[5] = { &wolf1,&wolf2, &wolf3, &wolf4, &wolf5 };
    world.wpisz(wolf1.getX(), wolf1.getY());
    world.wpisz(wolf2.getX(), wolf2.getY());
    world.wpisz(wolf3.getX(), wolf3.getY());
    world.wpisz(wolf4.getX(), wolf4.getY());
    world.DrawWorld();
    Trawa trawa;
    Organisms* TablicaOrganizmow[4] = { &wolf1,&wolf2,&wolf3,&trawa };

    for(int i = 0; i < 4; i++) {
        TablicaOrganizmow[i]->getTest();
    }

}




