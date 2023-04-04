#include "main.h"
/**
*_strstr - locates a substring
*@haystack: string to be searched
*@needle: substring to be found in string haystack
*
*Return: haystack with only the occurrence of needle
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	
	while (*haystack)
	{
		for (i = 0 ; haystack[i] == needle[i] ; i++)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
