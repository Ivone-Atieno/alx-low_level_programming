#include <stdio.h>
/**
 *main - main entry point.
 *description - prints the largest prime
 * factor of the given number.
 * Return: always 0 for success
 */
int main(void)
{
	int b;
	long num = 612852475143;

	while (b++ < num / 2)
	{
		if (num % b == 0)
		{
			num /= 2;
			continue;
		}
for (b = 3; b < num / 2; b += 2)
{
	if (num % b == 0)
		num /= b;
}
	}
	printf("%ld\n", num);
	return (0);
}
