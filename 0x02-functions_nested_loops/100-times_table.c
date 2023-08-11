#include "main.h"
/**
 *print_times_table - Prints the times
 * table of the input.
 * @x: The value of the times table to be
 *printed.
 */
void print_times_table(int x)
{
	int y, z, res;

	if (x >= 0 && x <= 15)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar('0');
			for (z = 1; z <= x; z++)
			{
				_putchar(',');
				_putchar(' ');

				res = y * z;

				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
