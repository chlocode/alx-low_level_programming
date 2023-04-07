#include <stdlib.h>
#include <stdio.h>
/**
*main - Entry point
*@argc: argument counter
*@argv: argument array
*
*Return: 0 if execution is successful
*/
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = a * b;
	printf("%d\n", result);
	return (0);
}
