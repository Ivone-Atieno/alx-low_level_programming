#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - The main entry point
 * Description - The program will assign
 *a  random number to the variable n each
 * time it is executed and prints the last
 * digit stored in the variable.
 *Return: always zero for success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
else if (last_digit < 6 && last_digit != 0)
	{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("Action not specificed\n");
	}
	return (0);
}
