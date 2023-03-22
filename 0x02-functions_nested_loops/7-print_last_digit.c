#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @v: number to be computed
 *
 * Return: last digit of the computed number
 */
int print_last_digit(int v)
{
	int Ld = v % 10;
	if (Ld < 0)
	{
		Ld *= -1;
	}
	_putchar(Ld);
	return (Ld);
}
