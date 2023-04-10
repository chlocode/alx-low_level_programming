#include "main.h"
/**
*_memcpy - copies memory area from one location to another
*@dest: destination
*@src: source
*@n: number of bytes copied
*
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0 ; num < n && *src != '\0' ; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
