#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator -a function that executes
 * a function given as a parameter on each
 * element of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

if (array == NULL || action == NULL)
	return;

for (x = 0; x < size; x++)
{
	action(array[x]);
}
}
