#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - prints out the values of struct members
*@d: pointer to struct
*
*Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	/**
	*printf("Name: %s\n", d->name);
	*printf("Age: %d\n", d->age);
	*printf("Owner: %s\n", d->owner);
	*/
}
