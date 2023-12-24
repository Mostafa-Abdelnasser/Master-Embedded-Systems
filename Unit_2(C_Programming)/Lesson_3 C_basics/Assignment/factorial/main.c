/*
 * main.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Mostafa
 */


#include <stdio.h>

int main()
{
	int n ,fact=1;



	for(int i=0;i<=2;i++)
	{
	printf("Enter an integer:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	if(n<0)
		printf("Error!!! factorial of negative numbers dosen't exist \n");
	else if(n==0)
		printf("Factorial = 1 \n");

	else
{



	while(n>0)
	{

		fact*=n;
		--n;

	}


	printf("Factorial =%d ",fact);
	fflush(stdout);fflush(stdin);



}


	}

	return 0;
}
