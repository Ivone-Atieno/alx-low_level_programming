#include "main.h"
/**
 * _memset - fills the first n bytes of
 * memory area pointed to by s with a
 * constant byte b
 * @s: starting address of memory to be filled
 * @b: constant value
 * @n: number of bytes to be changed
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
