#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: The character to be tested

 * Return: 1 if variable is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
