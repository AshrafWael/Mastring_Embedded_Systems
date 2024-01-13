
			   /*
 Name        : EX7_Factorial_Of_Number.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX7_Factorial_Of_Number
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
		int Number;
		printf("Enter a Integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Number);
	if(Number>0)
	{
		int fact=1;
		for(int i=1;i<=Number;i++)
		{
			fact*=i;
		}
		printf("Factorial=%d",fact);
	}
	else if(Number==0)
	{
		printf("Factorial=1");
	}
	else 
		printf("Error!!! Factorial Of Negative Number dose not Exist.");
	return 0;
}