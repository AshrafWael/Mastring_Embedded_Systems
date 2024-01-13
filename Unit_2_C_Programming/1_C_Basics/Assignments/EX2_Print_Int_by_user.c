/*
 * EX2_Print_Int_by_user.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Ashraf
 *      Discreption : This program print an integer number interd by user
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("Enter a Integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("You Entered:%d",number);
	return 0;
}
