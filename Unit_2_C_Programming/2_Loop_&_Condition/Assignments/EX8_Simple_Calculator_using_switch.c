
			   /*
 Name        : EX8_Simple_Calculator_using_switch.c
 Author      : Ashraf Wael
 Created on	 : Jan 13, 2024
 Description :  Unit 2 C-Progtamming >> HomeWork2 C-Basic >> EX8_Simple_Calculator_using_switch
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
		char operator;
		float Number1,Number2;
		printf("Enter Operator + or - or * or devide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);
	printf("Enter Two Operand: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&Number1,&Number2);
	switch(operator)
	{
		case '+' :
		printf("%0.2f+%0.2f=%0.2f",Number1,Number2,(Number1+Number2));
		    break;
		case '-' :
		printf("%0.2f-%0.2f=%0.2f",Number1,Number2,(Number1-Number2));
		    break;
		case '*' :
		printf("%0.2f*%0.2f=%0.2f",Number1,Number2,(Number1*Number2));
		    break;
		case '/' :
		if(Number2==0)
		{
			printf("Can not devide by Zero");
		}
		else{
		printf("%0.2f/%0.2f=%0.2f",Number1,Number2,(Number1/Number2));
		}
		    break;
		default :
		printf("Invalid Input Please Try again");
		break;
		
	}
	return 0;
}