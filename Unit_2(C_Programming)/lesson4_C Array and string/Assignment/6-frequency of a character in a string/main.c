/*
 * main.c
 *
 *  Created on: Dec 23, 2023
 *      Author: Mostafa
 */

#include <stdio.h>
#include <string.h>

int main()
{
	// array of string
	char string[100]={'\0'};
	// variable for the character
	char ch;
	//variable for the frequency
	int f=0;
	//variable for the for loop
	int i;


	// asking to enter a string
	printf("Enter a string:");
	fflush(stdout);fflush(stdin);
	gets(string);

	//ask for the character to check it frequency
	printf("Enter a character to find frequency:");
	fflush(stdout);fflush(stdin);
	scanf("%s",&ch);


	// check the frequency
	for(i=0;i<100;i++)
	{
		if(ch==string[i])
			f++;

	}


	printf("Frequency of %c =%d",ch,f);
	fflush(stdout);fflush(stdin);






	return 0;
}

