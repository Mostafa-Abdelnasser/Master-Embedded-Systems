/*
 * main.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Mostafa
 */

# include <stdio.h>

// variable to store the factorial
int z=1;

// prototype
//hard and some way dump
int factorial(int x);
//easy and swift
int factorial2(int x);

int main()
{
	// variable to enter
	int y;

	printf("Enter a positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	printf("Factorial of %d :%d",y,factorial2(y));
	fflush(stdin);fflush(stdout);






	return 0;
}

// fact function
int factorial(int x)
{


	if (x==0)
		goto newline ;

	else
	{
		z*=x;
		x--;
		factorial(x);
		if(x==0)
			return z;

	}

	newline:
		return z;


}

// another easy solution

int factorial2(int x)
{


	if (x==0||x==1)
	{
		x=1;
		return 1;
	}

	else
		return x*factorial(x-1);


}



