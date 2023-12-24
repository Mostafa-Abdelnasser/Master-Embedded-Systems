/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */



/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */

#include <stdio.h>

int main ()
{


	//upper lower cases()


	char a[20]="ahmed";
	char b[20]="EZZAT";
	int i=0 ,i2=0; // unlike for the loops in while must make a different variable for each one
	//difference between a-A in ascci is 97-65=32
	//add this number to any cap to convert to small
	while(a[i]!=0)
	{
		a[i]=a[i]-32 ; //convert to cap
		i++;

	}

	while(b[i2]!=0)
		{
			b[i2]=b[i2]+32 ; //convert to small
			i2++;

		}

	printf("%s ",a);
	printf("%s",b);






	return 0;
}







