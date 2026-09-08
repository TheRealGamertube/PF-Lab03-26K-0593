#include <stdio.h>
void main(void)
{
	int month, year;

	printf("Enter month: ");
	scanf("%i", &month);
	
	printf("Enter year: ");
	scanf("%i", &year);
	
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Month %i %i has 31 days", month, year);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Month %i %i has 30 days", month, year);
			break;
		case 2:
			if (year%4 == 0 && year%100 != 0 || year%400 == 0)
			{
				printf("Month %i %i has 29 days", month, year);
			}
			else
			{
				printf("Month %i %i has 28 days", month, year);
			}
			break;
			
		default:
			printf("Error! Invalid month number. Please enter a number from 1-12");
	}
	
}
