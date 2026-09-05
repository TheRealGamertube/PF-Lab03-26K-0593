#include <stdio.h>
#include <stdbool.h>

void main(void)
{
	int num = 5;
	float floating_point = 5.5;
	char character = 'A';
	char string[50] = "String";
	bool boolean = true;
	
	printf("This is an int: %i\nThis is a floating point number: %.2f\nThis is a char: %c\nThis is a string: %s\nThis is a boolean: %d", num, floating_point, character, string, boolean);
}
