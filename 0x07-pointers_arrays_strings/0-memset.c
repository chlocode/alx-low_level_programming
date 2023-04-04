#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: pointer to the block of memory to be filled
*@b: the value to fill s with
*@n: the number of bytes to fill
*
*Return: s
*/
char *_memset(char *s, char b unsigned int n)
{
	int num;
	for (num = 0 ; num < n ; num++)
	{
		s[num] = b;
	}
	return (s);
}
