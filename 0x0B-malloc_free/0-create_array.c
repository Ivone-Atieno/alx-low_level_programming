#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: input as char
 * Return: pointer to array, else NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int b;

if (size == 0)
{
	return (NULL);
}

ar = malloc(sizeof(char) * size);
if (ar == NULL)
{
	return (NULL);
}

for (b = 0; b < size; b++)
{
	ar[b] = c;
}
return (ar);
}
