#pragma once
#include <iostream>
#include "Organisms.h"

class World
{
	int h; //wysoko�c
	int w; //szeroko��
	
public:
	Organisms ***map;
	World(const int Height,const int Width);
	void wpisz(int h,int w);
	~World();
	int GetHeight();
	int GetWidth();
	void DrawWorld();
};