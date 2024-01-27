/*
 * EX1_Sum_Of_Two_Matrix_In_Order_2x2.c
 *
 *  Created on: Jan 27, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Array_&_String >>Sum_Of_Two_Matrix_In_Order_2x2
 	 	 	   using Ansi-style (c99)
 */
 #include "stdio.h"
 
 int main(void)
 {
	 float Matrix1[2][2];
	 float Matrix2[2][2];
	 float Result[2][2];
	 int i,j;
	 printf("Enter The Element of the first Materix\n");
	 for(i=0;i<2;i++)
	 {
		 for(j=0;j<2;j++)
		 {
			printf("Enter elment%d_%d: ",i+1,j+1); 
			fflush(stdin); fflush(stdout);
			scanf("%f",&Matrix1[i][j]);
		 }
	 }
	 	 printf("Enter The Element of the Scond Materix\n");
	 for(i=0;i<2;i++)
	 {
		 for(j=0;j<2;j++)
		 {
			printf("Enter elment%d_%d: ",i+1,j+1); 
			fflush(stdin); fflush(stdout);
			scanf("%f",&Matrix2[i][j]);
		 }
	 }
	 printf("Sum Of Two Matrix is\n");
	 for(i=0;i<2;i++)
	 {
		 for(j=0;j<2;j++)
		 {
          Result[i][j]=Matrix1[i][j] + Matrix2[i][j];
		 }
	 }
	 
    for(i=0;i<2;i++)
	 {
		 for(j=0;j<2;j++)
		 {
			printf(" %2.2f ",Result[i][j]);
		 } 
		 printf("\n");
	 }

	 
	 
	 
	 
	 return 0;
 }