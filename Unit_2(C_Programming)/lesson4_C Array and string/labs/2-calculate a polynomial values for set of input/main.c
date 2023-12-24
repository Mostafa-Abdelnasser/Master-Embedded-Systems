/*
 * main.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Mostafa
 */


#include <stdio.h>

int main()
{
	//used in the loops
	int i;
	// array of floats
	float x[5]={5,16,22,3.5,15};
	//polynomial
	float y;

	for(i=0;i<5;i++)
	{

		y = 5*x[i]*x[i]*+3*x[i]+2;
		printf("y(%f)=%f \n",x[i],y);




	}












	return 0;
}
