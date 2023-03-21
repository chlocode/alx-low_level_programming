#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations
 * of 2 digits using the putchar function.
 * Return: 0 if execution is successful
 */
int main(void)
{
	int i = 0;

	while (i <= 89)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
