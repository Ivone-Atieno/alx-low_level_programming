#include <stdio.h>
/**
 *main - Prints the first 98 Fibonacci
 *numbers.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count;
	unsigned long fnum1 = 0, fnum2 = 1, sum;

	for (count = 0; count < 92; count++)
	{
		sum = fnum1 + fnum2;
		printf("%lu, ", sum);

		fnum1 = fnum2;
		fnum2 = sum;
	}
	printf("\n");
	return (0);
}
