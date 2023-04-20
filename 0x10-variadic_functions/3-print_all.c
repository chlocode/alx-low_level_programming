#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_all - prints anything
*@format: list of argument types passed to the function
*
*Return: void
*/
void print_all(const char * const format, ...)
{
	va_list types;
	char c;
	int i;
	float f;
	char *s;
	char *format_ptr = (char *) format;

	va_start(types, format);

	while (*format)
	{
		switch (*format)
		{
			case 'c':
				c = va_arg(types, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(types, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(types, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(types, char *);
				printf("%s", s);
				if (s == NULL)
					printf("(nil)");
				break;
			default:
				format_ptr++;
				continue;
		}
		if (*format + 1 != '\0')
			printf(",");
	}
	printf("\n");
}
