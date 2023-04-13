#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars
*and initializes it with a specific char
*@size: size of array
*@c: specific char
*
*Return: a pointer to the array if function succeeds, else, return NULL
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
