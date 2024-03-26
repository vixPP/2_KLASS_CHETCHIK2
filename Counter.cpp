#include "Counter.h"


void Counter::add() 
{
	count++;
}

void Counter :: subtract()
{
	count--;
}

int Counter:: actualNum()
{
	return count;
}