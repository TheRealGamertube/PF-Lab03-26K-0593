#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num, temp, choice, prime;
	bool not_prime, exit = false; 
	
	
	do
	{
		
		printf("1. Even/Odd 2. Prime 3. Square 4. Exit\n");
		printf("Enter choice: ");
		scanf("%i", &choice);
		printf("Enter number: ");
		scanf("%i", &num);
		
		switch(choice)
		{
			case 1:
				if (num % 2 == 0)
				{
					printf("%i is even", num);
				}
				else
				{
					printf("%i is odd", num);
				}
				break;
			
			case 2:
				if (num <= 1) {
				        not_prime = true;
				    } 
					else {
				        int temp = num - 1;
				        while (temp > 1) {
				            if (num % temp == 0) 
							{
				                not_prime = true;
				                break;
				            }
				            temp--;
				        }
				    }
				if (not_prime == false)
				{
					printf("%i is prime", num);
				}
				else
				{
					printf("%i is not prime", num);
				}
				break;
				
			case 3:
				temp = num * num;
				printf("square of %i = %i", num, temp);
				
				break;
				
				
			case 4:
				exit = true;
				break;
				
			default:
				printf("Invalid choice! Please try again");
				break;
					
		}	
	
	}while(exit = false);
} 

