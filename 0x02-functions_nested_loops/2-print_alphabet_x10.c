#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char letter;
	int set = 0;

	while (set < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		set++;
	}
}
