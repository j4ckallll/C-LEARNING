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
	int choise;
	printf("1 for porotta \n2 for biriyani \n3 for mandhi \n4 for ssfast pani puri \nenter your order\n");
	scanf("%d",&choise);
	switch (choise)
	{
	case 1:
	    printf("you have selected porotta");
		break;
	case 2:
	    printf("you have selected biriyani");
		break;
	case 3:
	    printf("youn have selected mandhi");
		break;
	case 4:
		printf("you have selected ssfast pani puri");
		break;
	default:
	 	printf("item not in the menu");		
	}


	return EXIT_SUCCESS;

}









