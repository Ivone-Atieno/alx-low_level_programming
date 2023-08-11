#include <stdio.h>
/**
 *main - main entry point
 *Description - prints alphabets in lower
 *case except of q and e.
 *Return: - zero for success.
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
