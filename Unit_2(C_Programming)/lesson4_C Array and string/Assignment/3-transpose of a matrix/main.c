/*
 * main.c
 *
 *  Created on: Dec 23, 2023
 *      Author: Mostafa
 */

# include <stdio.h>

int main()
{

	//declare and define the input matrix and transpose one
	int a[10][10];
	int t[10][10];
	// size of the matrix variables
	int r,c;
	//variable for the for loop
	int m,n;

	// prompt the user for the size of the matrix
	printf("Enter the rows and column of the matrix:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&r);
	scanf("%d",&c);

	// prompt the user to enter the matrix

	printf("Enter elements of matrix:");
	fflush(stdout);fflush(stdin);

	for(m=0;m<r;m++)
	{

		for(n=0;n<c;n++)
		{
			printf("Enter element a%d%d:",m+1,n+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&a[m][n]);


		}



	}


	// for the transpose of the matrix


	for(m=0;m<c;m++)
	{

		for(n=0;n<r;n++)
		{
			t[m][n]=a[n][m];

		}

	}



	//print the entered matrix
	printf("Entered matrix: \n");
	fflush(stdout);fflush(stdin);

	for(m=0;m<r;m++)
	{

		for(n=0;n<c;n++)
		{
			printf("%d \t",a[m][n]);
			fflush(stdout);fflush(stdin);


		}
		printf(" \n");

	}





	// print the transpose matrix

	printf("Transpose of the matrix: \n");
	fflush(stdout);fflush(stdin);

	for(m=0;m<c;m++)
	{

		for(n=0;n<r;n++)
		{
			printf("%d \t",t[m][n]);
			fflush(stdout);fflush(stdin);


		}

		printf(" \n");

	}






	return 0;
}


