#include "Organisms.h"
#include <iostream>
#include "Random.h"
using namespace std;


Organisms::~Organisms() {
	cout << "[Organizm] Destruktor organizmu" << endl;
}

Organisms::Organisms() {
	cout << "[Organizm] Tworzenie ogranizmu" << endl;
}