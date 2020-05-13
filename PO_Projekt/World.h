#pragma once
#include <iostream>
#include "Organisms.h"

class World
{
	int h; //wysokoœc
	int w; //szerokoœæ
	
public:
	Organisms ***map;
	World(const int Height,const int Width);
	void wpisz(int h,int w);
	~World();
	int GetHeight();
	int GetWidth();
	void DrawWorld();
};