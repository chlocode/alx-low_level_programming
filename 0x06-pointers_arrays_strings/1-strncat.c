#include "main.h"
/**
*_strncat - concatenates 2 strings
*@dest: string 1
*@src: string 2
*@n: number of bytes
*
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;

	if (dest[l] != '\0')
		l++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
