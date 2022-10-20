#include "main.h"

/**
 * print_numbers - prints numbers fom 0 to 14 X10, followed by a new line
 * Description: is written by anenepeter
 */

void more_numbers(void)
{
	char num, l;

	for (l = 0; l <= 10; l++)
	{

		for (num = 0; num <= 14; num++)
		{
			if (num / 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}

