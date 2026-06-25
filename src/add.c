/*
 ============================================================================
 Name        : add.c
 Author      : j4ckal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num,i,flag=0;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=2; i<=num/2; i++) 
    {

        if(num%i == 0) 
        {
            flag=1;
            break; 
        } 
    } 

    if(flag==0)
    {
        printf("The given number is prime number\n");
    }
    else 
    {
        printf("The given number is not a prime number\n");
    }
	 
	return EXIT_SUCCESS;

}










