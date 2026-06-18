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
	int a,b,c;
	printf("Enter three number \n");
	scanf("%d %d %d",&a, &b, &c);


	if(a>=b)
	{
		if(a>=c)
		{
			printf("The greatest number is %d",a);
		}
	}


	else if (b>=a)
	{
		if(b>=c)
		{
			printf("The greatest number is %d",b);
		}
	}

    else
	{
		printf("The greatest number is %d",c);

	}
	return EXIT_SUCCESS;

}










