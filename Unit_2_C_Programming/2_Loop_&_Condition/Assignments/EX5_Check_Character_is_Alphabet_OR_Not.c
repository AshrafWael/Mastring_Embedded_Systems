			   /*
 Name        : EX5_Check_Character_is_Alphapet_OR_Not.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX5_Check_Character_is_Alphapet_OR_Not
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
	char Character;
		printf("Enter a Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&Character);
	
	if((Character > 64 && Character < 91) || (Character > 96 && Character < 123) )
	{
		printf("%c is an alphabet",Character);
	}
	else 
		printf("%c is NOT an alphabet",Character);
	
	return 0;
}