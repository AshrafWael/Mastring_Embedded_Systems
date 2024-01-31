/*
 * EX5_Search_an_element_in_Array.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Search_an_element_in_Array
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int main(void)
{
		 int n,i,number;
	 int Numbers[100];
	 printf("Enter the number of Element: ");
	 fflush(stdin); fflush(stdout);
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&Numbers[i]);
	 }
	for(i=0;i<n;i++)
	{
		printf("%d ",Numbers[i]);
	}
	 printf("\nEnter the element to be searched: ");
		 fflush(stdin); fflush(stdout);
	    scanf("%d",&number);
		for(i=0;i<n;i++)
		{
		  if(Numbers[i]== number)
		  {
			  printf("Number found at location: %d",i+1);
		  }			  
		}
		
	
	return 0;
}