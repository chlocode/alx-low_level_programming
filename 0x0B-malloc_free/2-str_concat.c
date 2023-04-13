#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates 2 strings
*@s1: string 1
*@s2: string 2
*
*Return: On failure, NULL
*/
char *str_concat(char *s1, char *s2)
{
	int j = 0;
	int count = 0;
	char *catenated;
	int catcount;

	/*determine string length*/
	while (*(s1 + count) != '\0')
		count++;
	while (*(s2 + j) != '\0')
		j++;
	catenated = (char *) malloc(count + j);
	if (catenated == NULL)
		return (NULL);
	for (catcount = 0 ; catcount < count ; ++count)
	{
		catenated[catcount] = s1[catcount];
	}
	for (j = 0 ; j < (count + j) ; ++j)
	{
		catenated[count + j] = s2[j];
	}

	catenated[count + j] = '\0';
	return (catenated);
}
