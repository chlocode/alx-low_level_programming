#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers -Prints numbers followed by a new line
*@separator: ponter to separating char
*@n: first number
*
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int value;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0 ; i < n ; i++)
	{
		value = va_arg(numbers, unsigned int);
		printf("%d", value);
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
