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

int main(void) {
	float a,b,c,avg;
	printf("Enter three number \n");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average is %f",avg);
return EXIT_SUCCESS;

}
