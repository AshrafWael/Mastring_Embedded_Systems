/*
 * Lab2_Calculate_Minimum_Value_Of_any_Given_Array.c
 *
 *  Created on: Jan 31, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Labs C-Function >>Calculate_Minimum_Value_Of_any_Given_Array
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
int CalcMin(int Numbers[], int n);
int main(void)
{
	int array[10]={8,9,2,4,9,3,78,3,5,7};
	int min =CalcMin(array,10);
	printf("The minimum number from a given array is: %d",min);
	
	
	return 0;
}
int CalcMin(int Numbers[], int n)
{
	int i;
	int MinValue =Numbers[0];
	for(i=0;i<n;i++)
	{
		if(Numbers[i]<MinValue)
		{
			MinValue=Numbers[i];
		}
	}
	return MinValue;
}