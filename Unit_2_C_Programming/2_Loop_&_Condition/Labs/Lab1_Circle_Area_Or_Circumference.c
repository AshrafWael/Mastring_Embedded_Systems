/*
 Name        : Lab1_Circle_Area_Or_Circumference.c
 Author      : Ashraf Wael
 Created on	 : Jan 17, 2024
 Description : Calclate the Circle_Area_Or_Circumference
 
 */

#include <stdio.h>

int main()
{
	char choice;
	float radius;
	float area,circumference;
	printf("Enter Circle Radius: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	printf("Enter Your Choice(a,To Calculate the Area ,c, To Calculate the Circumference: \n)");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
		case 'A':
		{
			area = 3.14 *radius*radius;
			printf("Area of circle is %0.3f",area);
		} 
		break;
		case 'c':
		case 'C':
		{
			circumference =2*3.14*radius;
			printf("circumference of circle is %0.3f",circumference);

		} 
		break;
		default :
		printf("Wrong Choice Please Try again");
		break;	
	}
	return 0;
}