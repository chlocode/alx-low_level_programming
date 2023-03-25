#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int shape = 0;
	int tag;

	if (size <= 0)
		_putchar('\n');
	while (shape < size)
	{
		for (tag = 0 ; tag < size ; tag++)
		{
			_putchar('#');
		}
		_putchar('\n');
		shape++;
	}
}
