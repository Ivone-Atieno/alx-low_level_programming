#include "main.h"
/**
 *print_line - draws a straight line
 *
 *@n: parameter
 *Return: no return value
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar(10);
}
