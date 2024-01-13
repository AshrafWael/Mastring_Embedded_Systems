/*
 * EX5_Find_ASCII_Value_Of_Char.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Ashraf
 *      Discreption : This program Find an ASCII Value of Spesfic Character
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
	return 0;
}
