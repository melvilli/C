/* Program to calculate 200th triangular number
   Introduction for the statement */
#include <stdio.h>

int main (void)
{
	int n, triangularNumber;

	triangularNumber = 0;

	// loop structure is (init_expression; loop_condition; loop_expression)
	for ( n = 1; n <= 200; n = n + 1 ) 			// n is index variable in loop
		triangularNumber = triangularNumber + n;// program_statement

	printf("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}
