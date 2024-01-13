
			   /*
 Name        : EX6_Sum_Of_Natural_Number.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX6_Sum_Of_Natural_Number
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
	
	unsigned int Number;
	printf("Enter a Integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&Number);
	int i=0 ,sum=0;
	for(i;i<=Number;i++)
	{
		sum+=i;
	}
	printf("Sum=%d",sum);
	
	return 0;
	
}