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
	int dest_length = 0;

	while (dest[dest_length] != 0)
		dest_length++;
	for (i = 0 ; i >= 0 && src[i] != '\0' ; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
