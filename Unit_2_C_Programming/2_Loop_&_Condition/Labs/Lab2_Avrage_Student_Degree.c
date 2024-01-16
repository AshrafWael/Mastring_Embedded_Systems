			   /*
 Name        : Lab2_Avrage_Student_Degree.c
 Author      : Ashraf Wael
 Created on	 : Jan 17, 2024
 Description :  Unit 2 C-Progtamming >> Labs C-Loop&Condition >> Lab2_Avrage_Student_Degree
 	 	 	   using Ansi-style (c99)
 
 */
 
#include <stdio.h>

int main()
{
	
	int Number;
	float degree,Result=0;
	
	printf("Enter Number of Student: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Number);
	
	for(int i=0;i<Number;i++)
	{
		printf("Enter Student (%d) degree: ",(i+1));
			fflush(stdin); fflush(stdout);
          scanf("%f",&degree);
			Result+=degree;
	}
	printf("Avrage Student degree is :%0.4f",(Result/Number));
	return 0;
}