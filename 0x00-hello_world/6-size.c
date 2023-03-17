#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if execution is successful
 */
int main(void)
{
	printf("%lu\n", "size of a char: ", sizeof(char)), "byte(s)";

	printf("%lu\n", "size of a int: ", sizeof(int)), "byte(s)";

	printf("%lu\n", "size of a long int: ", sizeof(long)), "byte(s)";

	printf("%lu\n", "size of a long long int: ", sizeof(double)), "byte(s)";

	printf("size of a float: ", "%lu", sizeof(float), "byte(s)");

	return (0);
}
