/*
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Ashraf Wael
 Created on	 : Jan 12, 2024
 Description : Swap Two Number Without Temp Varible
 
 */

#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    x = x + y; 
    y = x - y; 
    x = x - y;
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}