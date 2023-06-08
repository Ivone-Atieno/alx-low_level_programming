#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: first input as interger
 * @m: second input as integer
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0;
	int x = 63;
	unsigned long int exac;
	unsigned long int XOR = n ^ m;

	for (; x >= 0; x--)
	{
		exac = XOR >> x;

		if (exac & 1)
			num++;
	}
	return (num);
}
