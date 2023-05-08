#include "main.h"
/**
 * _strstr - finds the first occurrence of
 * the substring needle in the string hay
 *stack.
 * @haystack: parameter
 * @needle: parameter
 * Return: 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *t = haystack;
char *b = needle;

while (*t == *b && *b != '\0')
{
t++;
b++;
}
if (*b == '\0')
	return (haystack);
}
return (0);
}
