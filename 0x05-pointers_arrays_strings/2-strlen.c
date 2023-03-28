#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be computed
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; ++i)
		s++;
	return (i);
}
