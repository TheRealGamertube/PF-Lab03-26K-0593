#include <stdio.h>

int main()
{
	int sideA, sideB, sideC;
	
	printf("Enter three side lengths : ");
	scanf("%i %i %i", &sideA, &sideB, &sideC);
	
	if ((sideA+sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA))
	{
		printf("Valid triangle -> Type: ");
		
		if (sideA == sideB && sideB == sideC && sideA == sideC)
		{
			printf("Equilateral");
		}
		else if(sideA == sideB || sideB == sideC || sideA == sideC)
		{
			printf("Isosceles");
		}
		else
		{
			printf("Scalene");
		}
	}
	else
	{
		printf("Sides are invalid");
	}
	
	return 0;
}