#include <stdio.h>
/**
 *main - main entry point
 *Description - prints lowecase alphabets
 * in reverse.
 *Return: always 0 for success
 */
int main(void)
{
	int j;

	for (j = 122; j >= 97; j--)
	{
		putchar(j);
			}
	putchar('\n');
	return (0);
}
