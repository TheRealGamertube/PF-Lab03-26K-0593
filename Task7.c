#include <stdio.h>
void main()
{
	int age;
	float height;
	printf("Enter your age and height: ");
	scanf("%i %f", &age, &height);
	printf("You are %i years old and %.2f meters tall.", age, height);
}s