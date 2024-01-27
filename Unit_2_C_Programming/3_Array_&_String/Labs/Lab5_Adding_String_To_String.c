/*
 * Lab5_Adding_String_To_String.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Lab5_Adding_String_To_String.c
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 
 int main(void)
 {
	 char String1[30]="Ashraf Wael";
	 char String2[30]=" Abdelaziz";
	 int i,j=0;
       for(i=0;i<sizeof(String1);i++)
	   {
		   if(String1[i]==0) //when i=11
		   {
			   //String1[i]=" ";
			   String1[i] = String2[j];
			   j++;   
			   
		   }  
	   }
	   String1[i]=0;
	 printf("%s",String1);
	 
	 
	 return 0;
 }