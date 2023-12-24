/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: Mostafa
 */

#include <stdio.h>

int main()
{

	// define and declaration the array
	float a[100];
	// define an integer for the for loop
	int i;
	// define an integer for the user input
	int n;
	//define an float to store the average
	float z;

	// prompt for the needed number of integers
	printf("Enter the number of data:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	// store the number in the array
	for(i=0;i<n;i++)
	{
		printf("%d.Enter number:",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&a[i]);
	}

	// get the average

	for(i=0;i<n;i++)
		{
			z+=a[i];
		}

	printf("Average = %f",z/n);





	return 0;
}

