#include "main.h"
/**
 *print_sign - checks if a number is zero
 *,greater or less than zero and prints
 * the sign.
 *
 *@n: the input number as an integer.
 *
 *Return: 1 for greater than zero, 0
 * is zero and -1 is less than zero.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
