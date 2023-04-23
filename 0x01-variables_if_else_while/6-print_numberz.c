#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0, using the putchar function.
 * Return: 0 if execution is successful
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
