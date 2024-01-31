/*
 * EX8_Reverse_String.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Reverse_String
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
#include "String.h"
int main(void)
{
		char name[30];
		char revers;
	    int i=0,j=0;
	   printf("Enter the String: ");
       scanf("%[^\n]%*c",name);
	   i=0;
	   j=strlen(name)-1;
	   while(i < j)
	   {
		   revers=name[i];
		   name[i]=name[j];
		   name[j]=revers;
		   i++;
		   j--;
	   }
	   printf("Reverse String is: %s",name);
	 

	 
	 return 0;
}