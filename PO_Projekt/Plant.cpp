#include "Plant.h"
#include <iostream>
#include "Random.h"
using namespace std;


Plant::Plant(int sila,char znak) {
	this->strength = sila;
	this->znak = znak;

	Random random(0, 20);
	this->cordX = random.Oblicz();
	this->cordY = random.Oblicz();

	cout << "[Plant] Tworzenie roœliny" << endl;
}

Plant::~Plant() {
	cout << "[Plant] Zabijanie roœliny" << endl;
}

const void Plant::getTest() {
	cout << "[Plant] Sila: " << strength << endl;
	cout << "[Plant] Symbol: " << znak << endl;
	cout << "[Plant] X: " << cordX << endl;
	cout << "[Plant] Y: " << cordY << endl;
}

const void Plant::Print() {}