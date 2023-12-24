/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Mostafa
 */



# include <stdio.h>
# include <string.h>

int main()
{

	char names[5][14]={"hosain","elol","tito","bebo","naksh"};
	char name[14] ;
	int i;

	printf("Enter your name:");
	fflush(stdout);fflush(stdin);
	scanf("%s",name);

	for(i=0;i<5;i++)
	{

		if(stricmp(name,names[i])==0)
		{
			printf("your name is on the list");
			break;

		}


	}

	if(i==5)
		printf("your name isn't on the list ");

	return 0;
}


