/*
 * Lab1_Sorted_and_print_10Students_Degree.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Sorted_and_print_10Students_Degree
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 int main(void)
 {
	 float Student [10];
	 int i;
	 for(i=0;i<10;i++)
	 {
		 printf("Enter Student %d Degree: ",i+1);
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&Student[i]); //Student=&Student[0]
	 }
	 	 for(i=0;i<10;i++)
	 {
		 printf(" Student %d Degree is:%f \n",i+1,Student[i]);  
	 }
	 
	return 0; 
 }