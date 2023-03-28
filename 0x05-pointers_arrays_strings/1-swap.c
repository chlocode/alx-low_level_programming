#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer parameter.
 * @b: pointer parameter.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*b = d;
	*a = c;
}
