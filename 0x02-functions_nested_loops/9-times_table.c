#include "main.h"

/**
 * times_table - Prints the 9 times table
 * starting with 0.
 *
 *Return: no return value
 */
void times_table(void)
{
	int x, multi, res;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			res = x * multi;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
