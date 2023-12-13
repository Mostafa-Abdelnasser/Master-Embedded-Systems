/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


# include "stdio.h"

int main ()
{

	float a,b , product ;

	printf("Enter two float numbers:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&a,&b);
	product = a*b;
	printf("product is :%f",product);



 return 0;
}



