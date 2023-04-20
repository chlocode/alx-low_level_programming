#include <stddef.h>
#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer to name
*@f: pointer to function f
*
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
