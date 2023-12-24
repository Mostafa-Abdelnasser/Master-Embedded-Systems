/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h> //should be included to use this func

int main()
{

	//	we simply use atoi ar atof
	//it gives zero if it not able to convert

	char text[20];
	int x,y,z;

	printf("Enter x :");
	fflush(stdout);fflush(stdin);
	gets(text);
	x=atoi(text);

	printf("Enter y :");
	fflush(stdout);fflush(stdin);
	gets(text);
	y=atoi(text);

	z =x+y;
	printf("z = %d",z);




	return 0;


}

