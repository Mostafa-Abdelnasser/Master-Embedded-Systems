/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: Mostafa
 */


#include <stdio.h>
#include <string.h>


int main()
{
	// initialize two arrays of string
	char string[100]={0};
	char rev[100]={0};
	// variable for the for loop
	int i=0;
	//variable for the strlen()
	int len;
	int len2;
	// asking to enter a string
	printf("Enter the string:");
	fflush(stdout);fflush(stdin);
	gets(string);
	len=strlen(string); //get the length
	len2=len-1; //why minus 1 bec. strlen get the len +1 and index starts with 0
	for (i=0;i<len;i++)
	{
		rev[i]=string[len2];
		len2--;

	}

	//print the word after reversing

	printf("reverse string is:%s",rev);
	fflush(stdout);fflush(stdin);

	return 0;
}




