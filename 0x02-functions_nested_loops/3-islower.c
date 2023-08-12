#include "main.h"
/**
 *_islower - checks for lowercase
 * character and returns 1 otherwise
 * returns 0
 *
 * @c: the character in ASCII code
 *
 *Return: 1 for success and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
