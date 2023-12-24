/*
 * main.c
 *
 *  Created on: Dec 23, 2023
 *      Author: Mostafa
 */

#include <stdio.h>

int main()
{

	// initialize the array
	int a[10]={0};

	// the number of elements to be inserted
	int n;
	// element to be searched
	int e;
	// index to find
	int i;
	// variable for the for loop
	int r;
	// variable for the incremental values
	int v=11;
	// ask for the number of elements
	printf("Enter the number of elements:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	// make an array with  incremental values

	for(r=0;r<n;r++)
	{

		a[r] +=v;
		v+=10;
		v++;

	}

	// print the array array
	for(r=0;r<n;r++)
	{

		printf("%d \t",a[r]);
		fflush(stdout);fflush(stdin);

	}


	// Enter the element to be searched
	printf("\nEnter the element to be searched:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&e);



	// search through the array to find the element
	for(r=0;r<n;r++)
	{

		if(a[r]==e)
		{
			//store the value of index in i
			i=r;
			//print the location
			printf("Number found at the location =%d",i);
			fflush(stdout);fflush(stdin);

			break;
		}



	}


	 if(r==n&&a[r]!=e)
			{
				printf("element isn't in the array");
				fflush(stdout);fflush(stdin);
			}





	return 0;
}


