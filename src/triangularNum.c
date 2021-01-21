/*  Program for calculating specific
	triangular number */

#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber;

	printf("What number should I calculate for? ");
	scanf ("%i", &number);

	triangularNumber = 0;

	for ( n = 1; n <= number; ++n)
		triangularNumber += n;

	printf("Triangular number for %i is %i\n", number, triangularNumber);

	return 0;
}
