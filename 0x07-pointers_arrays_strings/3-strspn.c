#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: characters that make up the substring
*
*Return: length of substring
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int length = 0;
	
	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
