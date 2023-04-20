#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - searches for an integer
*@array: pointer to array
*@size: array size
*@cmp: function pointer
*
*Return: int index if cmp doesn't return 0 else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
