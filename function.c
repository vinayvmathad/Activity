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