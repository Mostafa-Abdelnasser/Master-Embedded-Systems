/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main ()

{

	char letter;

	for(int i=0;i<=2;i++)
		{

	printf("Enter an alphabet:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&letter);

	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
		printf("this letter is vowel \n");
	else
		printf("this letter is constant \n");

		}

	return 0;
}
