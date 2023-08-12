#include "main.h"
/**
 *swap_int - swaps the value of two integers.
 *@a: first integer
 *@b: seconf integer
 *Return: no return value
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
