#include <stdio.h>

int main()
{
	float weight, height, BMI;
	
	printf("Enter weight (Kg): ");
	scanf("%f", &weight);
	
	printf("Enter height (m): ");
	scanf("%f", &height);
	
	BMI = weight/(height*height);
	
	printf("BMI = %.2F -> Category : ", BMI);
	
	if(BMI < 18.5)
	{
		printf("Underweight");
	}
	else if(BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Normal");
	}
	else if (BMI >= 25.9 && BMI <= 29.9)
	{
		printf("Overweight");
	}
	else if (BMI >= 30)
	{
		printf("Obese");
	}
	return 0;
}