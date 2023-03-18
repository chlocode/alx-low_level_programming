#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet
 * in lowercase and then in uppercase followed
 * by a new line
 * Return: 0 if execution is successful
 */
int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (LETTER = 'A' ; LETTER <= 'Z' ; LETTER++)
	{
		putchar(LETTER);
	}
	putchar('\n');
	return (0);
}
