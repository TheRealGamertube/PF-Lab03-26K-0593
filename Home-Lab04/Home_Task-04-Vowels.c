#include <stdio.h>
#include <ctype.h>

int main()
{
	char character;
	
	printf("Enter a character: ");
	scanf("%c", &character);
	if (isalpha(character))
	{
		printf("%c is a ", character);
		
		switch(character)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("Vowel");
				break;
			default:
				printf("Consonant");
				break;
				
		}
	}
	else
	{
		printf("Character input is not an alphabet");
	}
}