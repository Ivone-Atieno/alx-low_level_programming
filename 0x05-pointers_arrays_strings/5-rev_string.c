#include "main.h"
/**
 *rev_string - reverses a string
 *@s: parameter
 *Return: no return value.
 */
void rev_string(char *s)
{
	int b = 0;
	int a = 0;
	char rev;

	while (*(s + b) != '\0')
		b += 1;
	b -= 1;
	while (a < b)
	{
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
		a++;
		b--;
	}
		}
