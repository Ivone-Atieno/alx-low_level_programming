#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int a = 0;

while (n[a])
{
if (n[a] >= 'a' && n[a] <= 'z')
	n[a] -= 32;
a++;
}
return (n);
}
