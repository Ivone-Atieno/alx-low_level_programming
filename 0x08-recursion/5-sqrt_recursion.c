#include "main.h"

int sqrt_recursion1(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (sqrt_recursion1(n, 0));
}

/**
 * sqrt_recursion1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */
int sqrt_recursion1(int n, int x)
{
if (x * x > n)
	return (-1);
if (x * x == n)
	return (x);
return (sqrt_recursion1(n, x + 1));
}
