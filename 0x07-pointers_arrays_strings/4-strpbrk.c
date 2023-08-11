#include "main.h"
/**
 * _strpbrk - locates the first occurrence
 * in the string s of any of the bytes in
 * the string accept.
 * @s: input string
 * @accept: parameter
 * Return: pointer to the byte in s or
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

while (*s)
{
for (h = 0; accept[h]; h++)
{
	if (*s == accept[h])
		return (s);
}
s++;
}
return ('\0');
}
