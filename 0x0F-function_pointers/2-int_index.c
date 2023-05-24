#include "function_pointers.h"

/**
 * int_index - searches for an int and
 * returns the index of the first element
 * for which cmp does not return 0
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the fuction to be used
 * to compare values
 * Return:0 for sucess1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size <= 0)
	{
		return (-1);
	}

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) != 0)
		{
			return (b);
		}
	}
	return (-1);
}
