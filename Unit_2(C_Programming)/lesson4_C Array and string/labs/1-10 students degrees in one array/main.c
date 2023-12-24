/*
 * main.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Mostafa
 */

# include <stdio.h>

int main ()
{
	//it easier to initialize the variable for the loops out side
	//it will we be used in different loops as independent variable
	//for each scoop
	int i;
	//declaration & definition  an array with 10 elements
	//it may be also float degree[10] = {75.2,34.6,....}
	float degree[10];

	for(i=0;i<10;i++)
	{

		printf("Enter mark of student(%d):",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&degree[i]);

	}


	printf("\n ");


	for(i=0;i<10;i++)
		{

			printf("Mark of student (%d) is : %f \n",i+1,degree[i]);
			fflush(stdout);fflush(stdin);
		}










return 0;


}

