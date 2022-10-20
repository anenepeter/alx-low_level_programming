#include "main.h"

/**
 * print_most_numbers - prints numbers fom 0 to 9, followed a new line
 * Description: is written by anenepeter
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}

	_putchar('\n');
}

