#pragma once
#include <iostream>

class Counter
{
private:
	int count;

public:
	Counter(int initial = 1) : count(initial) {}

	void add();

	void subtract();

	int actualNum();

};


