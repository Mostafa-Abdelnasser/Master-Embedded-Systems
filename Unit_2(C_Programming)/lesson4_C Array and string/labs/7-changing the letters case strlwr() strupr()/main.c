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


	//upper lower cases()


	char a[20]="ahmed";
	char b[20]="EZZAT";
	strupr(a);
	strlwr(b);
	strcat(a," ");
	strcat(a,b);
	printf("%s \n",a);







	return 0;
}






