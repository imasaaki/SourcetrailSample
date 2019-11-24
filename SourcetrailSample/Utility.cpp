#include "Utility.h"

int Utility::Sum(int* input, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += input[i];
	}

	return sum;
}
