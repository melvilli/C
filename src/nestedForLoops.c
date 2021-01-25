// Program to show nested for loops

#include <stdio.h>

int main (void)
{
	int n, number, triangularNum, counter;

	for ( counter = 1;    counter <= 5;    ++counter ) {
		printf ("Enter the number to calculate for?");
		scanf ("%i", &number);

		triangularNum = 0;

		for (n = 1;    n <= number;    ++n )
			triangularNum += n;

		printf ("\nTriangular number for %i is %i\n\n", number, triangularNum);
	}

	return 0;
}
