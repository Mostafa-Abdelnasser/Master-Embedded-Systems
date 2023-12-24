/*
 * main.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Mostafa
 */


# include "stdio.h"

int main()
{
	char character  ;


	for(int i=0;i<=3;i++)

	{

	printf("Enter a character:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);

	if ((character>='a'&&character<='z')||(character>='A'&&character<='Z'))
	{
		//these symbols between the range of the letters
		//automatically it will discard any number as it char type
		if(character!='['||character!='\\' ||character!= ']'||character!='^'||character!='-'||character!='`')
			printf("%c is an alphabet \n",character);
	}

	else
		printf("%c is not alphabet \n",character);


	}



 return 0;
}

