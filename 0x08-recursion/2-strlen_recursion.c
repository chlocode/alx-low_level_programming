#include "main.h"
/**
*_strlen_recursion - returns the length of a string
*@s: string to be computed
*
*Return: length of string s
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s)
	{
		if (*s !=  0)
		{
			length++;
			_strlen_recursion(s + 1);
		}
		s++;
	}
	return (length++);
}
