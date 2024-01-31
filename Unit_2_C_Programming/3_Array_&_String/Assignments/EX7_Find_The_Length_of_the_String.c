/*
 * EX7_Find_The_Length_of_the_String.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Find_The_Length_of_the_String
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int main(void)
{
		char name[100];
	int i,counter=0;
	printf("Enter the String: ");
     scanf("%[^\n]%*c",name);
	   for(i=0;i<100 && name[i]!='\0';i++)
	   {
			 counter++;
	   }
	printf("Length of the String is %d",counter);
	
	return 0;
}