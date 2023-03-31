#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
		else
			diff = 0;
	}
	return (diff);
}
