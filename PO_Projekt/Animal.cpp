#include "Animal.h"
#include <iostream>
#include "Random.h"
using namespace std;



Animal::~Animal() {
	cout << "[Animal] Zabijanie Zwierzêcia"<<endl;
}

const void Animal::getTest() {
	cout << "[Animal] Sila: "<<strength <<endl;
	cout << "[Animal] Incjatywa: " << initiative << endl;
	cout << "[Animal] Wiek: " << age << endl;
	cout << "[Animal] Symbol: " << znak << endl;
	cout << "[Animal] X: " << cordX << endl;
	cout << "[Animal] Y: " << cordY << endl;
}

Animal::Animal(int sila, int inicjatywa, int wiek, char znak) {
	this->strength = sila;
	this->initiative = inicjatywa;
	this->age = wiek;
	this->znak = znak;

	Random random(0, 20);
	this->cordX = random.Oblicz();
	this->cordY = random.Oblicz();

	cout << "[Animal] Tworzenie Zwierzecia" << endl;
}

const void Animal::Print() { cout << this->znak; }

int Animal::getX() {
	return this->cordX;
}

int Animal::getY() {
	return this->cordY;
}
