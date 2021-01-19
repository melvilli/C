#include <stdio.h>

int main (void)
{
	// Declaring variables and assigning values
	double a, b;
	a = 3.31e-8 * 2.01e-7;
	b = 7.16e-6 + 2.01e-8;

	// Displaying result
	printf("The result of the expression is %g\n", a / b);

	return 0;
}
