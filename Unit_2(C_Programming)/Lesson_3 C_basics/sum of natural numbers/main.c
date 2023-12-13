/*
 * main.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Mostafa
 */


#include <stdio.h>


int main()
{

	int count=1,n, sum=0 ;
	printf("Enter an integer:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);


	while(count<=n)
	{

		printf("Enter an integer:");
		fflush(stdout);fflush(stdin);
		scanf("%d",&n);

		sum+=n;
		++count;

	}

printf("sum is :%d",sum);



 return 0;
}

