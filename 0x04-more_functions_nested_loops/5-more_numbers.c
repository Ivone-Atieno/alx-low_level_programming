#include "main.h"
/**
 *more_numbers - prints numbers 0 to 14
 * 10 times
 *Return: no return value
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
		_putchar((b % 10) + '0');
	}
	_putchar('\n');
}
}