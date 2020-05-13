#include "World.h"
#include <iostream>
#include "Ground.h"
#include "Wolf.h"
using namespace std;

World::World(const int width,const int height) {
	this->h = height;
	this->w = width;
	map = new Organisms * *[height];
	for (int i = 0; i < height; i++) map[i] = new Organisms * [width];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) map[i][j] = new Ground();
	}
	cout << "[MAP] Tworzenie planszy"<<endl;
}

World::~World() {
	for (int i = 0; i < h; i++) delete[] map[i];
	delete[] map;
	cout << "[MAP] Destruktor swiata"<<endl;
}

void World::DrawWorld() {
	for (int i = 0; i < this->h; i++)
	{
		cout << "X ";
		for (int j = 0; j < this->w; j++)
		{
			if (i == 0) { cout << "X "; }
			else if (i == this->h - 1) { cout << "X "; }
			else { map[i][j]->Print(); cout << " "; }
		}
		cout << "X ";
		cout << endl;
	}
}

int World::GetHeight() {
	std::cout << this->h;
	std::cout << this->w;
	return this->h;
}

void World::wpisz(int h,int w) {
	map[h][w] = new Wolf();
}
