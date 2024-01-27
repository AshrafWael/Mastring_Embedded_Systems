/*
 * Lab6_Changing_String_Case.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Changing_String_Case
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 #include "string.h"
 
 int main(void)
 {
	 char String[20]="ASHRaf";
	 int i;
	 char String2[20];
	 for(i=0;i<strlen(String);i++)
	 {
		 if( String[i]> 64 && String[i]< 91) 
		 {
			 String2[i]=String[i]+32; //Convert from Uper to lower
		 }
		 else 
		 {
			  String2[i]=String[i]-32;//Convert from Lower to uper
		 }
	 }
	     String2[i]=0;//add Null To the end of the String
          printf("%s",String2);

	 
	 
	 return 0;
 }