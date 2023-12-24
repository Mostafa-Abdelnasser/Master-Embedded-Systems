/*
 * main.c
 *
 *  Created on: Dec 9, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main ()
{
	char choice;
	float radius , area , circumference ;

	printf("Enter circle radius : ");
	fflush(stdin);fflush(stdout);

	scanf("%f", &radius);
	printf("radius entered successfully\n");
	fflush(stdin);fflush(stdout);

	printf("Enter your choice (a to print the area ,c for the circumference):");
	fflush(stdin);fflush(stdout);

	scanf("%c",&choice);


	if (choice =='a')
	{
		area = 3.14159*radius*radius ;
		printf("your area is : %f" ,area );

	}

	else if (choice =='c')
	{
		circumference = 2*3.14159*radius ;
		printf("your circumference is : %f" ,circumference );

	}

	else
	{
		printf("wrong choice \n");

	}


	return 0 ;
}
