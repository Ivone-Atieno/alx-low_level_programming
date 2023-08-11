#include <stdio.h>
/**
 *main -main entry point
 *Description -Task 6: Numberz
 *Return: always 0 for success
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + 48);
	}
	putchar('\n');
	return (0);
}
