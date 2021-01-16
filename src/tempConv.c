// Simple program that converts 27°F to °C

#include <stdio.h>

int main (void)
{
	// Declaring variables and assigning values
	int F = 27;
	float C = (F - 32) / 1.8;

	// Conversion
	printf("27°F in °C is %f\n", C);

	return 0;
}
