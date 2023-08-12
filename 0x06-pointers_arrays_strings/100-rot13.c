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
	int i, j;

char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
	if (s[i] == alpha[j])
	{
		s[i] = alpharot[j];
		break;
	}
}
}
return (s);
}
