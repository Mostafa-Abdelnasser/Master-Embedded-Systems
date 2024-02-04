/*
 * main.c
 *
 *  Created on: Jan 3, 2024
 *      Author: Mostafa
 */

# include <stdio.h>

void prime(int x,int y);

int main()
{
	int z,m;

// prompt the user to enter two numbers
	printf("Enter two numbers (intervals):");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&z,&m);
// call the function
	prime(z,m);


	return 0;

}



void prime(int x,int y)
{
	// make array and assign the first element with zero will make all elements =0
	int m[1000]={0};
	// index for the array
	int i=0;





	//printing the array
		//y-i to get the initial value of x
		printf("prime number between %d and %d is :",x,y);
		fflush(stdout);fflush(stdin);


	// add all prime to the array
	for (;x<y;x++)
	{

		//prime number are only divisible by itself
		if (x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0&&x%9!=0)
			m[i]=x;
		else
			continue;

		i++;

	}

// printing the elements of the array on the screen 
	i=0;
	while(m[i]!=0)
		{

			printf(" %d",m[i]);
			fflush(stdout);fflush(stdin);
			i++;
		}




}


