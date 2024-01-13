/*
 Name        : EX1_Check_Number_Even_OR_Odd.c
 Author      : Ashraf Wael
 Created on	 : Jan 12, 2024
 Description : Check if the number is even or odd
 
 */

#include <stdio.h>

int main()
{
	int number;
printf("Enter an Integer Number You Want to chack: ");
scanf("%d",&number);
if(number %2 ==0)
{
	printf("%d is Even",number);
}
else
{
	printf("%d is Odd",number);
}
 
    return 0;
}