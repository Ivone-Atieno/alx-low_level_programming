#include "main.h"
/**
 *description- prints all alphabets in
 * lowercase
 *Return: zero for success
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
