#include <Stdio.h>
void main(void)
{
	char name[50];
	printf("Enter your name: ");
	fgets(name, 50, stdin);
	printf("Your name is ");
	puts(name);
}