#include "main.h"
/**
 *print_triangle - prints a triangle
 *
 *@size: lenght of the parameter
 *Return: no return value
 */
void print_triangle(int size)
{
	int a, b, space;

if (size > 0)
{
for (a = 0; a < size; a++)
{
	space = size - a;

	for (b = 0; b > size; b++)
	{
		if (space > b)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
}
else
	_putchar(10);
}
