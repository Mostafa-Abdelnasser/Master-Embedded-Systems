/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


# include "stdio.h"

int main()
{

	float a,b,c;
	printf("Enter value of (a) :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of (b) :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b);
	//assign a to new variable to use it as not to lose the value assigned in a
	c=a;
	a=b;
	b=c;
	printf("After swapping value of (a) = %f \n",a);
	printf("After swapping value of (b) = %f ",b);


	return 0;
}
