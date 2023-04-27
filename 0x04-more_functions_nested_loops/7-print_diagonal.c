#include "main.h"
/**
 *print_diagonal - draws a diagonol line
 *
 *@n: parameter
 *Return: no return value
 */
void print_diagonal(int n)
{
	int s, l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (l == (n - 1))
				{
					continue;
			}
			_putchar(10);
			}
	_putchar(10);
		}
	}
