#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings - prints strings followed by a new line
*@separator: ponter to separating character
*@n: number of strings passed
*
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list string;

	va_start(string, n);

	for (i = 0 ; i < n ; i++)
	{
		value = va_arg(string, char *);
		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
