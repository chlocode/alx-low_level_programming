#include "main.h"
/**
 * print_rev - prints a string in reverse followed by new line
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i] ; i++)
		while (i--)
			_putchar(s[i]);
	_putchar('\n');
}
