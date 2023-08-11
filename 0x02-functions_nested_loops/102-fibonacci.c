#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci number
 *starting with 1 and 2 and seperated by a
 * comma
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int count;
	unsigned long fib_num1 = 0, fib_num2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib_num1 + fib_num2;
		printf("%lu", sum);

		fib_num1 = fib_num2;
		fib_num2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
