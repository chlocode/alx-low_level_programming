#include "main.h"
/**
*_strpbrk - Searches a string for any of a set of bytes
*@s: string to be searched
*@accept: set of bytes
*
*Return: set of bytes found in string s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (s);
}
