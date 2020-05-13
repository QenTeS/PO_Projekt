#pragma once
#include "Organisms.h"
//class World;

class Animal : public Organisms
{
	int strength=0;
	int initiative=0;
	int age=0;

	int cordX=0;
	int cordY=0;

	char znak=' ';
public:
	//virtual void action() = 0;
	//virtual void collision() = 0;
	//virtual void drow() = 0;
	const void getTest();
	~Animal();
	Animal(int sila, int inicjatywa, int wiek, char znak);
	const void Print();
	int getX();
	int getY();
};

