#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet
 * reversed in lowercase
 * followed by a new line
 * Return: 0 if execution is successful
 */
int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
