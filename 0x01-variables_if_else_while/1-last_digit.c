#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n,ldgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ldgt = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldgt);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldgt);
	else
		printf("Last digit of %d is %d and and is less than 6 and not 0\n", n,ldgt);
	return (0);
}
