#include <stdio.h>
/**
*main -Entry point
*@argc: argument counter
*@argv: argument array
*
*Return: 0 if execution is successful
*/
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
