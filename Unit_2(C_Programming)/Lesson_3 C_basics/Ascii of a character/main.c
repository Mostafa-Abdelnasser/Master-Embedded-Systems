/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


# include "stdio.h"

int main ()
{

	char ascii;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ascii);
	printf("Ascii value of(%c)is:",ascii);
	printf("%d",ascii);

 return 0;
}


