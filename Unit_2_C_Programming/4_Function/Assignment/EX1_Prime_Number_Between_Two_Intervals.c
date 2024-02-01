/*
 * EX1_Prime_Number_Between_Two_Intervals.c
 *
 *  Created on: february 1, 2024
 *  Author: Ashraf Wael
 *  Description : Unit 2 C-Progtamming >> Assignment C-Function >>Prime_Number_Between_Two_Intervals
 	 	 	   using Ansi-style (c99)

 */
#include "stdio.h"
void PrimeNumber(int low ,int high);
int main(void)
{
	int num1 ,num2;
	printf("Enter two number (interval): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	PrimeNumber(num1,num2);
	
	
	return 0;
}
void PrimeNumber(int low ,int high)
{
	int i,flag;
	int prime =0;
	/*
	for(i=2;i<=num2/2;i++)
	{
		if((num1%i) == 0 )
		{
			prime=1;
			//printf("%d ",i);	
		}
		else
		{
			printf("%d ",i);
		}
	}
	*/
	// iteration until low is not equal to high
   while (low < high) //10<30  ||  11<30
   { 
      flag = 0;

      if (low <= 1) // false 10!<1 do not get in the statment || false 11 !<1
	  { 
         ++low;
         continue;
      }

      // i =2, i<10/2(5)     ||     i=2 , i<11/2(5)
      for (i = 2; i <= low / 2; ++i)
	 {

         if (low % i == 0) // 10%2 =0 true condition  || 11%2 =1 ,11%3 =1 , 11%4 =1 ,11%5=1
		 { 
            flag = 1;// yes
            break;
         }
      }

      if (flag == 0) // flag =1  ||
         printf("%d ", low);

      // to check prime for the next number
      // increase low by 1
      ++low; // low = 11 
   }

}