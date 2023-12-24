/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */


/*
 * main.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Mostafa
 */

# include "stdio.h"

int main ()

{

	float num1,num2,num3 ;

	printf("Enter three numbers:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f %f",&num1,&num2,&num3);

	if(num1>num2&&num1>num3)
		printf("largest number is :%f ",num1);
	else if(num2>num1&&num2>num3)
		printf("largest number is :%f ",num2);
	else
		printf("largest number is :%f ",num3);


	return 0;
}



