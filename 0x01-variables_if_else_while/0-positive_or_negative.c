#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @n: computes a random number
 *
 * Description: This program generates and
 * performs arithmetic on a random mumber.
 * It then determines if it is a positive number, zero
 * or a negative number.
 * Return: 0 if execution is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("is positive");
	}
	else if (n < 0) {
		printf("is negative");
	}
	else {
		printf("is zero");
	}
}
