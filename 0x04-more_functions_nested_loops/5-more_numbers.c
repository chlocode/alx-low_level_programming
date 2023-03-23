#include "main.h"
/**
 * more_numbers - prints 0-14 ten times followed by new line
 *
 * Return: Nothing. Void
 */
void more_numbers(void)
{
	int a;
	int n = 1;

	while (n <= 10)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a >= 10)
                                _putchar('1');
			_putchar((char)a% 10 + '0');;
		}
		n++;
		_putchar('\n');
	}
}
