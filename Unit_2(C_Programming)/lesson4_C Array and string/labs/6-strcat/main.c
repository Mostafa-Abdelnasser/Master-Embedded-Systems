/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */




#include <stdio.h>
#include <string.h>

int main ()
{


	//adding string to a string using strcat()


	char a[20]="ahmed";
	char b[20]="ezzat";
	strcat(a," ");
	strcat(a,b);
	printf("%s \n",a);





	return 0;
}




