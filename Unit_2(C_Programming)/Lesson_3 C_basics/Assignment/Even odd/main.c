/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main()
{

	int number;

	for(int i=0;i<=1;i++)
	{

	printf("Enter an integer Number:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);

	if(number%2==0)
		printf("this number is even \n");
	else
		printf("this Number is odd \n");

	}

 return 0;
}



