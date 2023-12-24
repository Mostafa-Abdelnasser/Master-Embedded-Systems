/*
 * main.c
 *
 *  Created on: Dec 23, 2023
 *      Author: Mostafa
 */

# include <stdio.h>

int main()
{

	// initialize the array
	int a[10]={0};

	// the number of elements to be inserted
	int n;
	// element to be inserted
	int e;
	// index to be replaced
	int i;
	// variable for the for loop
	int r;
	// variable for the incremental values
	int v=1;
	// ask for the number of elements
	printf("Enter the number of elements:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	// make an array with  incremental values

	for(r=0;r<n;r++)
	{

		a[r] +=v;
		v++;

	}

	// print the array array
	for(r=0;r<n;r++)
	{

		printf("%d \t",a[r]);
		fflush(stdout);fflush(stdin);

	}


	// Enter the element to be inserted
	printf("\nEnter the element to be inserted:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&e);

	// ask for the index to be changed
	printf("Enter the location:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&i);

	// assign to the element to the new location
	a[i]=e;

	// print the new array array
	for(r=0;r<n;r++)
	{

		printf("%d \t",a[r]);
		fflush(stdout);fflush(stdin);

	}












	return 0;
}
