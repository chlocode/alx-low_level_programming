#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: first element
*@max: last element
*
*Return: pointer to newly created array
*/
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	/*Determine length*/
	for (i = min ; i < max ; i++)
	{
	}
	/*Allocate memory*/
	array = malloc(i + 1);
	if (array == NULL)
		return (NULL);
	for (i = min ; i <= max ; ++i)
		array[i]++;
	return (array);
}
