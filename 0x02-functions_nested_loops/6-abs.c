#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @b: value to be tested
 *
 * Return: absolute value and 0 if execution is successful
 */
int _abs(int b)
{
	int absolute;

	if (b < 0)
	{
		absolute = b * -1;
		return (absolute);
	}
	else
	{
		absolute = b;
		return (absolute);
	}
	return (0);
}
