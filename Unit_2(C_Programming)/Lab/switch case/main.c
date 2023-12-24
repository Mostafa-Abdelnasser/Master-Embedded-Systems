/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main()
{

	int choice ;
	float radius , circumference , area ;
	printf("Enter the radius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("Enter your choice : 1(area) , 2(circumference):");
	fflush(stdin);fflush(stdout);
	scanf("%d",&choice);


	switch(choice)
	{
		case 1 :
			{
				area = 3.14159*radius*radius ;
				printf("your area is : %f" ,area );
			}
		break;


		case 2 :
			{
				circumference = 2*3.14159*radius ;
				printf("your circumference is : %f" ,circumference );

			}
		break;


		default:
			printf("wrong choice \n");
		break;





	}



	return 0 ;
}
