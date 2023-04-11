#include <stdlib.h>
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
	int sum;
	
	if (argc > 1)
	{
		for (count = 1 ; count < argc ; count++)
		{
			if (atoi(argv[count]) < '0' || atoi(argv[count]) > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[count]);
			}
		}
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
