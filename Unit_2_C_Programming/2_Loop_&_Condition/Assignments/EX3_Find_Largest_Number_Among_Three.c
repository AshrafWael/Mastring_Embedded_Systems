			   /*
 Name        : EX3_Find_Largest_Number_Among_Three.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX3_Find_Largest_Number_Among_Three
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	float num1,num2,num3;
	printf("Enter Three Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		      printf("Largest Number is %0.2f",num1);	
	}
	else if(num2>num1 && num2>num3)
	{
				printf("Largest Number is %0.2f",num2);	
	}
	else
	{
				printf("Largest Number is %0.2f",num3);	
	}
	return 0;
	
}