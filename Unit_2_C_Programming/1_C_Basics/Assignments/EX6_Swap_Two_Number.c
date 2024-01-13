/*
 * EX6_Swap_Two_Number.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Ashraf
 *      Discreption : This program Swap Two Number
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,temp;
	printf("Enter Value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter Value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	temp =a;
	a=b;
	b=temp;
	printf("After swapping, value of a =%0.2f \n",a);
	printf("After swapping, value of b =%0.2f",b);

	return 0;
}
