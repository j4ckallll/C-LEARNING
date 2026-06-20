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
	int a,b,c,result;
	printf("Enter a number :\n");
	scanf("%d%d",&a,&b);
	printf("Enter 1 for addition \nEnter 2 for subraction \nEnter 3 for multiplication \nEnter 4 for division \nEnter 5 for modlus");
	scanf("%d",&c);

	if(c==1)
	{
		result=a+b;
		printf("Result = %d",result);
	}


	else if(c==2)
	{
		result=a-b;
		printf("Result = %d",result);
	}


	else if(c==3)
	{
		result=a*b;
		printf("Result = %d",result);
	}


	else if(c==4)
	{
		result=a/=b;
		printf("Result = %d",result);
	}


	else if(c==5)
	{
		result=a%b;
		printf("result = %d",result);
	}


	else
	{
		printf("YOU ARE A FOOL!!!!!!");
	}

	return EXIT_SUCCESS;

}









