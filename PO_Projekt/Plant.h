#pragma once
#include "Organisms.h"


class Plant:public Organisms
{
	int strength = 1;
	char znak = ' ';
	
	int cordX = 1;
	int cordY = 1;
public:
	Plant(int sila,char znak);
	~Plant();

	const void Print();

	const void getTest();
};

