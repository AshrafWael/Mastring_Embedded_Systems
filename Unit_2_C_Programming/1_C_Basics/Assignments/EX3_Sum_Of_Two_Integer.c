/*
 * EX3_Sum_Of_Two_Integer.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Ashraf
 *      Discreption : This program take two integer from user and print their sum
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1,number2;
	printf("Enter Two Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number1);
	fflush(stdin); fflush(stdout);
	scanf("%d",&number2);
	printf("Sum:%d",number1+number2);
	return 0;
}
