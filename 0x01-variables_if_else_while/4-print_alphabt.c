#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the letters
 * of the alphabet in lowercase omitting q and e.
 * Return: 0 if execution is successful
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' && letter != 'q' && letter != 'e' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
