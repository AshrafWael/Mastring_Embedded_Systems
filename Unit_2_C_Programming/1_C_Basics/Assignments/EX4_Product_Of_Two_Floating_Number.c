/*
 * EX4_Product_Of_Two_Floating_Number.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Ashraf
 *      Discreption : This program take two Floating number from user and print their Product
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float number1,number2;
	printf("Enter Two Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&number1);
	fflush(stdin); fflush(stdout);
	scanf("%f",&number2);
	printf("Product:%0.2f",number1*number2);
	return 0;
}
