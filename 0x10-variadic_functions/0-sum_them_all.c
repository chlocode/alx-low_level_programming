#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its parameters
*@n: first parameter
*
*Return: int value
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int arg;
	int sum = 0;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		arg = va_arg(args, unsigned int);
		sum += arg;
	}
	va_end(args);
	return (sum);
}
