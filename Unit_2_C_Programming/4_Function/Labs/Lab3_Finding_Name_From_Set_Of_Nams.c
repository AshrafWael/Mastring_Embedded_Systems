/*
 * Lab3_Finding_Name_From_Set_Of_Nams.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Function >>Finding_Name_From_Set_Of_Nams
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
#include "String.h"
int FindName(char Names[][14],int size,char name[]);
int main(void)
{
	 char name[14];
	char Names[5][14]={"Ashraf","Ahmed","Abdo","Mohammed","Khaled"};
	printf("Enter your first Name: ");
	gets(name);
	if(FindName(Names,5,name) == 0)
	{
		printf("Welcome");
	}
	else
	{
		printf(" Sorry Your name is not here");
	}
	
	return 0;
}
int FindName(char Names[][14],int size,char name[])
{
	int result,i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<14;j++)
		{
		   if(Names[i][j] == name[j])
		   {
			result = 0;
		   }
		}
	}
	
	return result;
	
}