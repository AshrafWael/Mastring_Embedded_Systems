			   /*
 Name        : Lab3_Tringle_Number.c
 Author      : Ashraf Wael
 Created on	 : Jan 17, 2024
 Description :  Unit 2 C-Progtamming >> Labs C-Loop&Condition >> print the form Tringle_Number
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");	
	}
	
	return 0;
}