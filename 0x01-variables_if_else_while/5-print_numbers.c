#include <stdio.h>
/**
 *main - main entry point
 *Description - prints a single digit
 * numbers of base 10 starting from 0
 * Return: - always 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
