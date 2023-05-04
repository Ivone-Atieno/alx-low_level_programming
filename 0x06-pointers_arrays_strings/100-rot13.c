#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int x, y;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFJHIJKLMnopqrstuvwxyzabcdefghijklm";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 52; y++)
{
	if (s[x] == alpha[y])
	{
		s[x] = alpharot[y];
		break;
	}
}
}
return (s);
}
