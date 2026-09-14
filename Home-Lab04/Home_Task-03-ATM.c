#include <stdio.h>

int main()
{
	int balance, w_amount;
	const int limit = 25000;
	
	printf("Enter Balance: ");
	scanf("%i", &balance);
	
	printf("Enter withdrawal amount: ");
	scanf("%i", &w_amount);
	
	if (w_amount % 500 == 0)
	{
		if (w_amount < limit)
		{
			if (w_amount <= balance)
			{
				balance = balance - w_amount;
				printf("Withdrawal successful. \nRemaining Balance: %i", balance);
			}
			else
			{
				printf("Withdrawl failed. Cannot make withdrawal greater than current balance");
			}
		}
		else
		{
			printf("Withdrawal failed. Cannot make withdrawal over daily limit of 25,000");
		}
	}
	else
	{
		printf("Withdrawl failed. Cannot make withdrawal of an amount that is not a multiple of 500");
	}
	
	return 0;
}