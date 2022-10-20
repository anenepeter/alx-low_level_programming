#include "main.h"

/**
 * print_numbers - prints numbers fom 0 to 9, followed by a new line
 * Description: is written by anenepeter
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}

