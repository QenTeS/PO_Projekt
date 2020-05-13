#include "Ground.h"
#include <iostream>
using namespace std;

Ground::Ground() { 
	cout << "[Ground] Tworzenie ziemi"<< endl; 
}
const void Ground::Print() { cout << "_"; }

const void Ground::getTest(){};

Ground::~Ground() { cout << "[Ground] Usuwanie ziemi" << endl; }
