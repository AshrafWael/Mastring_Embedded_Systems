/*
 * Lab1_Calculate_the_Factorial.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Function >>Calculate_the_Factorial
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int factorial(int number); //function definetion
int main(void)
{
	int num;
	printf("Enter number to get factorial: ");
	scanf("%d",&num);
	printf("Factorial(%d) = %d\n",num,factorial(num));
	
	return 0;
}
int factorial(int number) //function declaration
{
	int fact=1;
	while(number !=0)
	{
		fact*=number;
		number--;	
	}
	return fact;
}