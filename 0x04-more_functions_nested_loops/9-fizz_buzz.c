#include <stdio.h>
/**
 *main - the main entry point
 * description - prints number 1 to 100
 * but replaces the multiples of 3, 5
 * and both by Fizz, Buzz and FizzBuzz
 * respectively.
 *Return: Always 0 for success.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
{
	if (x % 3 == 0 && x % 5 != 0)
		printf(" Fizz");
	else if (x % 3 != 0 && x % 5 == 0)
		printf(" Buzz");
	else if (x % 3 == 0 && x % 5 == 0)
		printf(" FizzBuzz");
	else if (x == 1)
		printf("%d", x);
	else
		printf(" %d", x);
}
	printf("\n");
	return (0);
}
