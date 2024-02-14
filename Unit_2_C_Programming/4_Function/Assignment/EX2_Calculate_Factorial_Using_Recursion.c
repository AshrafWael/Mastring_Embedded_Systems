/*
 * EX2_Calculate_Factorial_Using_Recursion.c
 *
 *  Created on: february 7, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Function >>Calculate_Factorial_Using_Recursion
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int factorial(int number);
int main(void)
{
	int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n,factorial(n));
	
	return 0;
}
int factorial(int number)
{
	if (number>=1)
	{
		return number * factorial(number -1);
	}
	else 
		return 1;
    
	
}