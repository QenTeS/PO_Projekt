#include "Random.h"
#include <iostream>
using namespace std;

Random::Random(int min, int max) {
	this->min = min;
	this->max = max;
}

int Random::Oblicz() {
	return rand() % max + min;
}

Random::~Random() {
	cout << "[Random] Usuwanie generatora" << endl;
}