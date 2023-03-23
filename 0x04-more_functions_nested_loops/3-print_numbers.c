#include "main.h"
/**
 * print_numbers - prints numbers from 0-9 followed by new line
 * @a variable for holding iteration value
 *
 * Return: nothing. void
 */
void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
		_putchar(a + '0');
	_putchar('\n');
}
