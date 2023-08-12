#include "main.h"
/**
 * print_number - print an integer
 * @n: integer parameter
 * Return: 0 for success
 */
void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	if ((b / 10) > 0)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
