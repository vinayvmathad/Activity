/**
 * @file function.c
 * @author vinay mathad (you@domain.com)
 * @brief function definition
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int convert(char * string,int n)
{
    int count =0;
    int sum=0;
   while (count < n)
        {
		
		printf(" %x\n", (int)*(string++) );
		sum += (int)*(string);
		 ++ count ;
        }
    return sum;
}