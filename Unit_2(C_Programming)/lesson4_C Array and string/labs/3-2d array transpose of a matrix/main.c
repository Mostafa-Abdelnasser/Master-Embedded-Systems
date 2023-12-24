/*
 * main.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Mostafa
 */

# include <stdio.h>

int main()
{
	// define two arrays and for loop variables

	float  a[3][3];
	float  t[3][3];
	int r,c;

	//take in the array
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			printf("Enter element(%d,%d):",r,c); //(0,0),(0,1),(0,2) then go to the next row
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);

		}

	}


	printf("\n");
	printf("the transpose matrix is \n");


	//making it's transpose
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{

			t[r][c] = a[c][r]; // the elements diagonal stay the same while the other shifted along it

		}

	}

	//print the transpose array

	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{

			printf("%2.2f \t",t[r][c]);

		}

		printf("\n");

	}



	return 0;

}


