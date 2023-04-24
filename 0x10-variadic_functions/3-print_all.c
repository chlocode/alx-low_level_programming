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

	va_start(types, format);

	while (*format != '\0')
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
				break;
		}
		if (*(format + 1) != '\0' && ((*format + 1) == 'c' || *(format + 1) == 'i' || *(format + 1) == 'f' || *(format + 1) == 's'))
			printf(",");
		format++;
	}
	printf("\n");
	va_end(types);
}
