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
	int a,b;
	printf("Enter two number \n");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		printf("The greatest number is %d",a);
	}
	else
	{
		printf("The greatest number is %d",b);

	}
	return EXIT_SUCCESS;

}










