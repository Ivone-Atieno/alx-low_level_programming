#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * is_digit - checks if inputs are digits
 * @num: input string to be evaluated
 *
 * main - main entry point
 * Return: 0 for success else return 98
 *and print error
 */

int is_digit(char *num)
{
	int a = 0;

	for (; num[a] != '0'; a++)
	{
		if (!isdigit(num[a]))
		{
			return (0);
		}
	}
	return (1);
}

void print_num (signed long int numm)
{
	if (numm < 0)
	{
		_putchar('-');
		numm = -numm;
	}

	if (numm / 10)
	{
		print_num (numm / 10);
	}
	_putchar((numm % 10) + '0');
}

int main(int argc, char **argv)
{
	int num1, num2;
	signed long int res;

	if (argc != 3)
	{
		_putchar('Error');
		_putchar(10);
		return (98);
	}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
	_putchar('Error');
	_putchar(10);
	return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

res = (signed long int) num1 * num2;

print_num (res);
_putchar(10);

return (0);
}
