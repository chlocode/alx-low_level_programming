#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	for (i = 0 ; s1[i] != '\0' ; ++i)
	{
	}
	for (j = 0 ; s2[j] != '\0' && j <= n ; ++j)
	{
	}

	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; ++i)
		ptr[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' && j <= n ; ++j)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
