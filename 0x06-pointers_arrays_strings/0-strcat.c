#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: pointer to the resulting string
 * (dest)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
