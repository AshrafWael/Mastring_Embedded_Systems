/*
 * Lab7_Compare_Two_Strings.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Compare_Two_Strings
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 #include "string.h"
 
 int main(void)
 {
	 char Names[4][10]={"Ashraf","Wael","Abdo","Mohamed"};
	 char name [10];
	 int i,j;
	 /*
	 printf("Enter Your Name: ");
	 fflush(stdin); fflush(stdout);
	 scanf("%s",name);//to get just the first name
	 */
	 //gets(name);//To get the hole name include the space
//********First Convert The Uper Case to Lower Case*****************
          
       for(i=0;i<4;i++)
	   {
		   for(j=0;j<strlen(Names[j]);j++)
		   {
			   		 if( Names[i][j]> 64 && Names[i][j]< 91) 
		            {
			             Names[i][j]=Names[i][j]+32; //Convert from Uper to lower
		            }
					else {}
		   }  
		   Names[i][j]=0;
	   }
//********Scond Compare each Character*****************

	 
	 
	 return 0;
 }