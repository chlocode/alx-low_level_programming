#include <stdio.h>
/**
*main -Entry point
*@argc: argument counter
*@argv: argument array
*
*Return: 0 if execution is successful
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
