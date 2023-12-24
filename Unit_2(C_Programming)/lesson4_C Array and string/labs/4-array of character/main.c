/*
 * main.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Mostafa
 */


#include <stdio.h>
#include <string.h>

int main ()
{
	/*
	char text[100] ={'h','e','l','l','o',0};
	printf("%s \n",text);
	 */

	//if there is no null character (0) it will run along the memory
	/*
	char text[100] ={'h','e','l','l','o'};
	printf("%s \n",text);
	 */

	//scanning a string value w
	//in this part we can use scanf but it takes only first name
	//if you Entered two names it won't take it
	//it doesn't take spaces
	/*
	char text [100];
	printf("Enter your first name :");
	fflush(stdout);fflush(stdin);
	scanf("%s",text);
	printf("you Entered:%s",text);
	 */

	//solution to this you can use gets() instead of scanf


	/*
	char text [100];
	printf("Enter your  name :");
	fflush(stdout);fflush(stdin);
	gets(text);
	printf("you Entered:%s",text);
	 */

	/*
	char names[5][14]={"ahmed koka","nabil donga","email",
			"carvajal","elol"};
	int i;
	for(i=0;i<5;i++)
	{


		printf("%s \n",names[i]);
		fflush(stdout);fflush(stdin);
	}

	 */

	//	copy a string to string old fashion way




	//int i ;


	/*
	for(i=0;i<20;i++)
	{

		b[i]=a[i];


	}

	b[i] =0;

	printf("%s \n",b);

	or
	 */
/*
	int i=0 ;

	while(a[i]!=0)
	{

		b[i]=a[i];
		i++;

	}

	b[i] =0;
	printf("%s \n",b);
	fflush(stdout);fflush(stdin);

*/


	// easiest way is use strcpy() must include string.h
/*
	char a[20]= "ahmed ezzat";
	char b[20];
	strcpy(b,a);
	printf("%s \n",b);

*/


	//adding string to a string using strcat()


	char a[20]="ahmed";
	char b[20]="ezzat";
	strcat(a," ");
	strcat(a,b);
	printf("%s \n",b);












	return 0;
}




