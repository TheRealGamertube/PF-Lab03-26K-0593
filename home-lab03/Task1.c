#include <stdio.h>
#include <stdbool.h>

void main(void)
{
	int integer = 5;
	float floating_point = 5.5;
	double double_value = 5000000;
	char character = 'c';
	bool boolean = false;
	
	printf("Int: %i\nSize of Int: %zu\n", integer, sizeof(int));
	printf("Float: %.2f\nSize of Float: %zu\n", floating_point, sizeof(float));
	printf("Double: %.2lf\nDouble: %zu\n", double_value, sizeof(double));
	printf("Char: %c\nSize of Char: %zu\n", character, sizeof(char));
	printf("Boolean: %d\nSize of Boolean: %zu\n", boolean, sizeof(bool));


}