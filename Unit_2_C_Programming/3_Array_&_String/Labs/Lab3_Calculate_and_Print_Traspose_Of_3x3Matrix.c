
/*
 * Lab3_Calculate_and_Print_Traspose_Of_3x3Matrix.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Array_&_String >> Calculate_and_Print_Traspose_Of_3x3Matrix
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 
 int main(void)
 {
	 float Matrix1[3][3];
	 float Matrix2[3][3];
	 int i,j;
	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			printf("Enter the item(%d ,%d): ",i,j);
			fflush(stdin); fflush(stdout);
		    scanf("%f",&Matrix1[i][j]);         
		 } 
	 }
	 
	 printf("The Matrix is \n");
	 	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			printf(" %2.2f ",Matrix1[i][j]);
		 }
          printf("\n");		 
	 }
	 
	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
         Matrix2[i][j]=Matrix1[j][i];
		 } 
	 }
	 
	 printf("The Transport Matrix is \n");
	 	 	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			printf(" %2.2f ",Matrix2[i][j]);
		 } 
		 printf("\n");
	 }
	return 0; 
 }