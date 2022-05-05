
/**
 * @file main.c
 * @author vinay mathad
 * @brief main function
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include"function.h"
 int convert(char * string,int n);
int main()
    {
 
        char string[20];
        int n;
	    int sum=0;

        printf("No. of words\n");
        scanf("%d", &n);
 
        printf(" Enter the string of %d characters \n" , n);
        scanf("%s", string);
    sum = convert(string,n);
	printf("%d\n",sum);
    return 0;
    }