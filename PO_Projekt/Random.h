#pragma once
class Random
{
	int min;
	int max;
public:
	Random(int min, int max);
	int Oblicz();
	~Random();
};

