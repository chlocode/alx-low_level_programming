#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the numbers
 * in base 16 (hexadecimal).
 * Return: 0 if execution is successful
 */
int main(void)
{
	int i = 48;
	int hex = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (hex <= 102)
	{
		putchar (hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
