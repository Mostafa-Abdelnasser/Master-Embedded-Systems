/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


# include "stdio.h"


int main ()

{

	float num ;

	for(int i=0;i<=2;i++)
	{

	printf("Enter a number:");
	fflush(stdout);fflush(stdin);
	scanf("%f",&num);


	if(num>0)
		printf("%f is positive \n ",num);
	else if(num<0)
		printf("%f is negative \n ",num);
	else
		printf("you entered zero \n");
	}


	return 0;
}






