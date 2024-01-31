/*
 * EX4_Insert_Element_In_Array.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Insert_Element_In_Array
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int main(void)
{
	int n,i,number,location;
	int element[100];
	printf("Enter Number of Element: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		element[i]=i+1;
	}
		for(i=0;i<n;i++)
	{
		printf("%d ",element[i]);
	}
	     printf("\nEnter the number to be inserted: ");
		fflush(stdin); fflush(stdout);
	    scanf("%d",&number);
		     printf("Enter the number to be inserted: ");
		fflush(stdin); fflush(stdout);
	    scanf("%d",&location);
		//make the location empty
	for(i=n;i>=location;i--)
	{ 
      element[i]=element[i-1];
	}
	n++;
	element[location-1]=number;//insert the number in location
			for(i=0;i<n;i++)
	{
		printf("%d ",element[i]);
	}
	
	return 0;
}