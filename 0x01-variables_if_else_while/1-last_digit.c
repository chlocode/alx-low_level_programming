#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random
 * number and picks the last digit.
 * It then determines if the number is
 * either greater than five, zero, or less than
 * six and is not zero.
 * Return: 0 if execution is successful
 */
int main(void)
{
	int n;
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (Last_digit  > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", Last_digit);
		printf(" and is greater than 5\n");
	}
	else if (Last_digit < 6 && Last_digit != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", Last_digit);
		printf(" and is less than 6 and not 0\n");
	}
	else if (Last_digit == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", Last_digit);
		printf(" and is 0\n");
	}
	return (0);
}
