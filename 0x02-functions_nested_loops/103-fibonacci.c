#include <stdio.h>
/**
 *main - Prints the sum of even-valued
 *Fibonacci sequence not exceeding 4000000
 *
 * Return: Always 0 for success
 */
int main(void)
{
	unsigned long fnum1 = 0, fnum2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fnum1 + fnum2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fnum1 = fnum2;
		fnum2 = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
