#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the binary numbet
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int x = 0;

	if (!b)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);

		decimal = 2 * decimal + (b[x] - '0');
	}

	return (decimal);
}
