#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array using malloc
*@nmemb: number of elements
*@size: byte size
*
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb ; i++)
	{
		((char *)array)[i] = 0;
	}
	return (array);
}
