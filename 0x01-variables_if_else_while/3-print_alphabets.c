#include <stdio.h>
/**
 *main - main entry
 * Description - prints alphabets in lower
 * case then upper case and followed by
 * a new line.
 *Return: zero for success
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
