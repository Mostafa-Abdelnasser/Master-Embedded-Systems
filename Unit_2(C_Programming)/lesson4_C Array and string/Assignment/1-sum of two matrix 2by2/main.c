/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: Mostafa
 */

# include <stdio.h>

int main ()
{
	// defining two arrays
	float a[2][2],b[2][2];
	//third array to store the new values
	float z[2][2];
	// variables for the (for) loops
	int r,c;
	// for the first matrix
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Enter a%d%d element:",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[r][c]);

		}


	}

	// for the second matrix
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Enter b%d%d element:",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&b[r][c]);

		}


	}

	// adding the two elements of the array
	//and putting them in the new array

	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{

			z[r][c] = a[r][c]+b[r][c];

		}


	}

	// print the new array


	printf(" \n the sum of the two matrix: \n");

	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{

			printf("%f\t",z[r][c]);
			fflush(stdout);fflush(stdin);

		}

		printf("\n");
		fflush(stdout);fflush(stdin);

	}


	return 0;
}
