#include <stdio.h>
void main(void)
{
	int num;
	printf("Input a number: ");
	scanf("%i", &num);
	if (num%2 ==  0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}