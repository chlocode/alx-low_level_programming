#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse
*@s: string to print
*
*Return: void
*/
void _print_rev_recursion(char *s)
{
	int  i = *s - 1;

	if (i >= 0)
	{
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
