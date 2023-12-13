/*
 * main.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Mostafa
 */

#include <stdio.h>

int main()
{

	char c;
	int a,b,num=0;


for(int i=0;i<3;i++)

	{

	printf("Enter operator + ,-, *,/:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	printf("Enter two operands:");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&a,&b);


	switch(c)
	{
	//**********************************************
	case '+' :  //ascii code is (43) can be written instead of +
			num = a+b;
			break;
	//**********************************************

	case '-' : //ascii code is (45)
			num = a-b;
			break;
	//**********************************************

	case '*' : //ascii code is (42)
			num = a*b;
			break;
	//**********************************************

	case '/' : //ascii code is (47)
			num = a/b;
			break;
	//**********************************************

	default :
		printf("Enter a valid argument");
		break;

	}

	printf("%d%c%d =",a,c,b);
	printf("%d \n",num);

	}



	return 0;
}
