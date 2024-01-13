			   /*
 Name        : EX4_Check_Number_Positve_OR_Negative.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX4_Check_Number_Positve_OR_Negative
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
	float Number;
	printf("Enter a Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Number);
	if(Number>0)
	{
		printf("%0.3f is Positve",Number);	
	}
	else if(Number<0)
	{
		printf("%0.3f is Negative",Number);
	}
	else
		printf("Number is Zero");
	
	return 0;
}