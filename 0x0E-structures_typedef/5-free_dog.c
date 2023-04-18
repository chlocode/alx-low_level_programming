#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees memory allocation
 * @d: pointer to struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
