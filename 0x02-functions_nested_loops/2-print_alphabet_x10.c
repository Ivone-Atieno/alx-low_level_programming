#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the
 *alphabet in lowercase.
 *Return: always 0 for success.
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
				}
	_putchar('\n');
}
}
