/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main()
{
	int a, b , minimum;


	printf("Enter the two numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d" ,&a ,&b );
	minimum = (a<b) ? a:b ;
	printf("minimum no is : %d", minimum);
	//printf("elo was here");

 return 0;
}
