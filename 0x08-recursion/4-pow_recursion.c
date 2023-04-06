#include "main.h"
/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: base number
*@y: exponent
*
*Return: x ** y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
	{
		return _pow_recursion(x ** y);
	}
}
