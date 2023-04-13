#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup -returns a pointer to a newly allocated space in memory
*@str: pointer to string
*
*Return: a pointer to the duplicated string on success, else, NULL
*/
char *_strdup(char *str)
{
	int i;
	char *dup;
	
	for (i = 0 ; str[i] != '\0' ; ++i)
	{
	}
	dup = (char*) malloc(i + 1);
	if (dup == NULL)
	{
		return NULL;
	}
	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}

