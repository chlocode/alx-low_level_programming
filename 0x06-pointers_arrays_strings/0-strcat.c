#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: string 1
*@src: string 2
*
*Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0 ; i >= 0 && src[i] != '\0' ; i++)
		dest[*dest + i] += src[i];
	dest[*dest + i] = '\0';
	return (dest);
}
