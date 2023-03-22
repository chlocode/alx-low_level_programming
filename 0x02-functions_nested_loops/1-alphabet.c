#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet
 * in lowercase followed by a new line.
 * Return: 0 if execution is successful
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
