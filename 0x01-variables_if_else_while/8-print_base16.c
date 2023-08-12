#include <stdio.h>
/**
 *main - main entry point
 * Description - prints all numbers of
 * base 16 in lowercase.
 *Return: always 0 for success.
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
