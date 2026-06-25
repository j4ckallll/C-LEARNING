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
	int num,i;
	printf("Enter a number ");
	scanf("%d",&num);
	 for(i=2;i<=num;i++)
	 {
		if(i%2==0)
	 {
		printf("%d\n",i);

	 }
	}
	 
	return EXIT_SUCCESS;

}










