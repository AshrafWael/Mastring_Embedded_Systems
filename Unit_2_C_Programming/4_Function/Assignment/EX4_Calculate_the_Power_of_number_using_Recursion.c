/*
 * EX4_Calculate_the_Power_of_number_using_Recursion.c
 *
 *  Created on: february 14, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Function >>Calculate_the_Power_of_number_using_Recursion
 	 	 	   using Ansi-style (c99)

 */
 
 #include "stdio.h"
int CalcPower(int base , int exp);
int main(void)
{
	int base ,exp;
	printf("Enter base of number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power of number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&exp);
	printf("%d^%d=%d",base,exp,CalcPower(base,exp));
	
	return 0;
}
int CalcPower(int base , int exp)
{
	if(exp !=0)
	{
		return base *(CalcPower(base,exp-1));	
	}
	else 
		return 1;
	
	
	
}