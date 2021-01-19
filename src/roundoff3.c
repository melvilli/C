#include <stdio.h>

int main (void)
{
	int i, j, Next_multiple;
	i = 996;
	j = 4;
	Next_multiple = i + j - i % j;

	printf("Closest and largest multiple of 256, divisible by 7 is %i\n", Next_multiple);

	return 0;
}
