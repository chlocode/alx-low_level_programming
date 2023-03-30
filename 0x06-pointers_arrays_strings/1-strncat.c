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
	int i = 0;
	int l = 0;

	if (dest[*dest +i] != '\0')
		l++;
	if (i < n && src[i] != '\0')
	{
		src[i] = dest[*dest + i];
		i++;
		l++;
	}
	dest[*dest + i] = '\0';
	return dest;
}
