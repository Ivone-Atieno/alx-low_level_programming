#include "main.h"

int check_prime(int n, int j);

/**
 * is_prime_number - checks if the input
 * integer is a prime number
 * @n: input as integer
 *
 * Return: returns 1 if true else return 0
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (check_prime(n, n - 1));
}

/**
 * check_prime - checks if a number is prime recursively
 *@n: input as integer
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int j)
{
if (j == 1)
	return (1);
if (n % j == 0 && j > 0)
	return (0);
return (check_prime(n, j - 1));
}
