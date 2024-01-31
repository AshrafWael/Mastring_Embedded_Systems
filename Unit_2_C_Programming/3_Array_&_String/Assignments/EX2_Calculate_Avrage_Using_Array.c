/*
 * EX2_Calculate_Avrage_Using_Array.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Calculate_Avrage_Using_Array
 	 	 	   using Ansi-style (c99)
			   
 */
 #include "stdio.h"
 
 int main(void)
 {
	 int n,i;
	 float Numbers[100],sum=0.0;
	 printf("Enter the number of data: ");
	 fflush(stdin); fflush(stdout);
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		 printf("%d.Enter the number: ",i+1);
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&Numbers[i]);
	 }
	 	 for(i=0;i<n;i++)
	 {
		sum+=Numbers[i];
	 }
	 printf("Avrage= %2.2f",sum/n);
	 
	 
	 
	 return 0;
 }