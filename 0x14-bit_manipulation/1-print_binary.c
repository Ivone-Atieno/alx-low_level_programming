#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: input as decimal
 */

void print_binary(unsigned long int n)
{
	int x = 63;
	int num = 0;
	unsigned long int num1;

for (; x >= 0; x--)
{
	num1 = n >> x;

	if (num1 & 1)
	{
		_putchar('1');
		num++;
	}

	else if (num)
		_putchar('0');
}
if (!num)
	_putchar('0');
}
