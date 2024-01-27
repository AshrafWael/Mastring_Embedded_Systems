/*
 * Lab4_Copy_String_To_String.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Lab4_Copy_String_To_String.
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 
 int main(void)
 {
	 char String1[30]="Ashraf Wael Abdelaziz";
	 char String2[30];
	 int i=0;
	 while(String1[i]!=0)
	 {
		 String2[i]=String1[i];
		 i++;	 //when i=21 String1[21]=0
	 }
	 String2[i]=0; //add Null to the end of the String
	 printf("%s",String2);
	 
	 
	 
	 return 0;
 }