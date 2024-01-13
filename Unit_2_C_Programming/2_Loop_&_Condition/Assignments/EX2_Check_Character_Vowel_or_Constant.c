
			   /*
 Name        : EX2_Check_Character_Vowel_or_Constant.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX2_Check_Character_Vowel_or_Constant 
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	char alpha;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
      switch(alpha)
  {
	case 'a' :
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' :
	{
		printf("%C is a Vowel",alpha);
	}
	break;
	case 'A' :
	case 'E' :
	case 'I' :
	case 'O' :
	case 'U' :
	{
		printf("%C is a Vowel",alpha);
	}
	break;
	default :
	printf("%C is a Constant",alpha);
	break;
	
  }
	
	
	return 0;
}