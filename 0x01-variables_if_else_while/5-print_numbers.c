#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single
 * digit numbers of base ten starting from 0
 * followed by a new line
 * Return: 0 if execution is successful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
		printf("\n");
	}
	return (0);
}
