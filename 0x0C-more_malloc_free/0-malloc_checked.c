#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: byte size
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/*Declare a void function.*/
	void *ptr;

	/*Allocate memory.*/
	ptr = malloc(b);
	/*Check for malloc failure.*/
	if (ptr == NULL)
	{
		exit(98);
	}
	/*Return pointer to memory.*/
	return (ptr);
}
