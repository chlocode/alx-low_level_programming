#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers
 * separated by space and comma
 * Return: 0 if execution is successful
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

