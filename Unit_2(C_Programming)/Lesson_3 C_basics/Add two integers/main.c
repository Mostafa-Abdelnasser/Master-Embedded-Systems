/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


# include "stdio.h"

int main ()
{

	int a,b ,sum ;

	printf("Enter two integers:");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&a,&b);
	sum = a+b;
	printf("sum is :%d",sum);



 return 0;
}

