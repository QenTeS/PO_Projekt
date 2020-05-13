#include "Wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf() : Animal(10, 10, 0, 'W') {
	cout << "[Wilk] Tworzenie wilka" << endl;
}

Wolf::~Wolf() {
	cout << "[Wilk] Zabjanie wilka" <<endl;
}

