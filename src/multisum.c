/* This program adds two integer values
   and displays the rssults */

#include <stdio.h>

int main (void)
{
	// Declaring variables
	int value1, value2, sum;
	
	// Assigning values
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;

	// Displaying the result
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;

}
