/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: Mostafa
 */

#include <stdio.h>

int main()
{
	// array of string
	char string[100]={'\0'};
	// variable for the while loop
	int i=0;


	// asking to enter a string
	printf("Enter a string:");
	fflush(stdout);fflush(stdin);
	gets(string);
	//printing without using a library

	while(string[i]!=0)
	{

		i++;

	}


	printf("length of the string:%d",i);


	return 0;
}


