/*
 * EX6_Find_Frequancy_of_Characters_in_String.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Find_Frequancy_of_Characters_in_String
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
#include "String.h"
int main(void)
{
	char name[100];
	int i,counter=0;
	char character;
	printf("Enter the String: ");
     scanf("%[^\n]%*c",name);
       printf("Enrer the character ro find the frequancy: ");
	   scanf("%c",&character);
	   for(i=0;i<strlen(name);i++)
	   {
		 if(name[i]==character)
			 counter++;
	   }
	printf("frequancy of %c is: %d",character,counter);
	
	
	return 0;
}