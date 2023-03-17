#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if execution is successful
 */
int main(void)
{
	printf("%lu\n", "size of a char: ", sizeof(char));

	printf("%lu\n", "size of a int: ", sizeof(int));

	printf("%lu\n", "size of a long int: ", sizeof(long));

	printf("%lu\n", "size of a long long int: ", sizeof(double));

	printf("%lu", "size of a float: ", sizeof(float));

	return (0);
}
