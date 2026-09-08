#include <stdio.h>
void main(void)
{
	int num1, num2, result;
	char operator;

	printf("Enter first number: ");
	scanf("%i", &num1);
		
	printf("Enter operator (+ - * /): ");
	scanf(" %c", &operator);
	
	printf("Enter second number: ");
	scanf("%i", &num2);
	
	switch(operator)
	{
		case '+':
			result = num1 + num2;
			printf("%i %c %i = %i", num1, operator, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%i %c %i = %i", num1, operator, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%i %c %i = %i", num1, operator, num2, result);
			break;
			
		case '/':
			if (num2 == 0)
			{
				printf("Error! Can't divide by 0");
			}
			else
			{
				result = num1 / num2;
				printf("%i %c %i = %i", num1, operator, num2, result);
			}
			break;
					
		default:
			printf("Error! Please use one of the 4 provided operators");
	}
}
