#include "main.h"
/**
 *puts2 - prints every other character of
 * a string followed by a new line.
 * @str: parametet
 *Return: nothing
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar(10);
}
