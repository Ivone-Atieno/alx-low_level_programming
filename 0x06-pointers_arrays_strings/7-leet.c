#include "main.h"

/**
 * leet - encode into 1337 speak
 * @n: input value
 * Return: A pointer to n
 */
char *leet(char *n)
{
	int a, b;

	char alpha[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

for (a = 0; n[a] != '\0'; a++)
{
	for (b = 0; b < 10; b++)
	{
		if (n[a] == alpha[b])
		{
			n[a] = nums[b];
		}
	}
}
return (n);
}
