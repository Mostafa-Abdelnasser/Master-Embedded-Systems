/*
 * main.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Mostafa
 */

# include <stdio.h>
# include <stdlib.h> //to include exit()

//to store the final value
int z=1;
// prototype
int sqr(int x,int y);

int main ()
{

	// variables to store from the user
	int x,y;


	printf("Enter the base number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter the power number (positive integer):");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	sqr(x,y);
	printf("%d^%d=%d",x,y,z);
	fflush(stdin);fflush(stdout);



	return 0;


}


int sqr(int x,int y)
{


	z*=x;
	y--;

	if (y!=0&&y>0)
		sqr(x,y);

	else if(y==0)
		return z;
	else
		z=1;

	// as we can see that z is a global variable so we don't have to pass it back




	// i can remove this line bec. it's pass by reference
	return 0 ;


}

/*
if(y==0)
	{
		printf("%d^%d =%d",x,y,1);
		fflush(stdin);fflush(stdout);

	}

	else if(y==1)
	{
		printf("%d^%d =%d",x,y,x);
		fflush(stdin);fflush(stdout);

	}

	else
	{


	}
*/
