#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of
 * integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created
 *array
 */

int *array_range(int min, int max)
{
	int *p;
	int num, x = 0;

	if (min > max)
	{
		return (NULL);
	}

	num = max - min + 1;

	p = malloc(num * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}

	for (; x < num; x++)
	{
		p[x] = min + x;
	}

	return (p);
}
