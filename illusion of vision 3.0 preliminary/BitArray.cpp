#include "BitArray.h"

bool isSetBit(int number, int index)
{
	return (number & (1 << index)) != 0;
}

int setBit(int number, int index)
{
	return number | (1 << index);
}

int inverseBit(int number, int index)
{
	return number ^ (1 << index);
}

int resetBit(int number, int index)
{
	return number & ~ (1 << index);
}