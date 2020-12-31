#include <stdio.h>

int main(void)
{
	//Declaring variables
	int rgbColor;
	
	//Assignimg variables
	rgbColor = 0xFFEF0D;
	
	//Display statement
	printf("Color is %#x\n", rgbColor); // Lower case
	printf("Color is %#X\n", rgbColor); // Upper case

	return 0;
}
