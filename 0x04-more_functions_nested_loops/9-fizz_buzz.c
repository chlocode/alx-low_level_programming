#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if execution is successful
 */
int main(void)
{
	int list;

	for (list = 1 ; list <= 100 ; list++)
	{
		/*putchar(' ');*/
		if (list % 15 == 0)
			printf("FizzBuzz");
		else if (list % 5 == 0)
			printf("Buzz");
		else if (list % 3 == 0)
			printf("Fizz");
		else
			printf("%d", list);
		if (list < 100)
			printf(" ");
	}
	return (0);
}
