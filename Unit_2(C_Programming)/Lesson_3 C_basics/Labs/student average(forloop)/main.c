/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: Mostafa
 */


#include "stdio.h"

int main()
{

	int i, nstudents ;
	float sum , degree ;
	printf("Enter the number of students:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nstudents);

	for(i=1 ,sum=0 ; i<=nstudents ; i++ )
	{
		printf("Enter student (%d) degree:",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree);
		sum += degree ;

	}

	printf("Average of students is %f ",sum/nstudents);



return 0;


}

