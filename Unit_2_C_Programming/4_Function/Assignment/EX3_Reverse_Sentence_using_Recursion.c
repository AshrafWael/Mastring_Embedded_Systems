/*
 * EX3_Reverse_Sentence_using_Recursion.c
 *
 *  Created on: february 14, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Function >>Reverse_Sentence_using_Recursion
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
void Reverse();
int main(void)
{
	printf("Enter a Sentence: ");
	Reverse();
	
	return 0;
}
void Reverse()
{
	char character ;
	scanf("%c",&character);
	if(character != '\n')
	{
		Reverse();
		printf("%c",character);
	}	
}