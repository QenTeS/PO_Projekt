#include "Trawa.h"
#include "Plant.h"
#include <iostream>
using namespace std;

Trawa::Trawa():Plant(0,'T') {
	cout << "[Trawa] Tworzenie Trawy" << endl;
}

Trawa::~Trawa() {
	cout << "[Trawa] Niszczenie Trawy" << endl;
}

