/*
 * Lab2_Calculate_Polynomyal_For_Set_Of_Input.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Calculate_Polynomyal_For_Set_Of_Input
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 int main(void)
 {
	 float Numbers [5] ={5,12,22.2,3,10};
	 float Result;
	 int i;
	 for(i=0;i<5;i++)
	 {
		 Result = 5 * Numbers[i] * Numbers[i] + 3 * Numbers[i]+2;
		 printf("y(%f)= %f\n",Numbers[i],Result);
		 
	 }
	 
	 
	 return 0;
 }