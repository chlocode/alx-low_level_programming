#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 * main - check the code
 *
 * Description: This program prints the alphabet
 * in lowercase followed by a new line.
 * Return: 0 as it's void
 */
int main(void)
{
	char letter;
	for (letter - 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}
}
