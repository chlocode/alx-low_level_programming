#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times underscore should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int line;

	for (line = 0 ; line < n ; line++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
