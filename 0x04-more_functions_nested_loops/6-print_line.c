#include "main.h"

/**
 * print_line - prints numbers fom 0 to 9, followed by a new line
 * @n: number of times
 *
 * Description: is written by anenepeter
 */

void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
		_putchar('_');

	_putchar('\n');
}

