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
	char  hexa;

	for (hexa = 0 ; hexa <= 'f' ; hexa++)
	{
		putchar((int)(hexa));
	}
	putchar('\n');
	return (0);
}
