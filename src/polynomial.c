#include <stdio.h>

int main (void)
{
	float x = 2.55;
	float p = 3 * (x * x * x) - 5 * (x * x) + 6;

	printf("The result of the polynomial is %f", p);

	return 0;
}
