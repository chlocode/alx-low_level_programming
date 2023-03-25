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
	int space;

	for (slash = 0 ; slash < n ; slash++)
	{
		for (space = 0 ; space < slash ; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		if (n <= 0)
			_putchar('\n');
	}
	/*_putchar('\n');*/
}
