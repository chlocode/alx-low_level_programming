#include <stdio.h>
/**
 * main - Entry
 *
 * Description: This porgram prints the alpahabets
 * in lowercase followed by a new line
 * Return: 0 if execution is successful
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
