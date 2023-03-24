#include "main.h"
/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: number of times backslash should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int slash;

	for (slash = 0 ; slash < n ; slash++)
	{
		_putchar('\\');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
