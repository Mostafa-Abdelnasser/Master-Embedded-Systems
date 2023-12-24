/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main()
{

	int a,b;
	printf("Enter value of (a) :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a); //20(10100) assigned to A
	printf("Enter value of (b) :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&b);//23(10111) assigned to B

	a=a^b;  //3(00011)
	b=b^a; //20(10100)
	a=a^b; //23(10111)
	printf("After swapping value of (a) = %d \n",a);
	printf("After swapping value of (b) = %d ",b);


	return 0;
}

