
/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */

#include <stdio.h>
int main ()
{

	int i,c,d=20;
 //for each line
	for (i=0;i<20;i++){

		for(c=0;c<d;c++)

		{

			//for each stars in each line
			printf("*");
			fflush(stdout);

		}

		printf(" \n");
		fflush(stdout);
		d--;


	}







	return 0;
}










