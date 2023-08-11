#include "main.h"
#include <stdlib.h>
#include <strings.h>

/**
 * argstostr - concatenates all the argum
 *ents of your program.
 * @ac: input as integer
 * @av: pointer to a pointer array
 * Return: pointer to a new string else
 *NULL if failed
 */

char *argstostr(int ac, char **av)
{
	int len = 0, x, y;
	char *str;
	int i = 0;

if (ac == 0 || av == NULL)
{
	return (NULL);
}

for (x = 0; x < ac; x++)
{
	for (y = 0; av[x][y] != '0'; y++)
	{
		len++;
	}
	len++;
}
len++;

str = malloc(len *sizeof(char));

if (str == NULL)
{
	return (NULL);
}

for (x = 0; x < ac; x++)
{

for (y = 0; av[x][y] != '0'; y++)
{
str[i] = av[x][y];
i++;
}
str[i] = '\n';
i++;
}
str[i] = '0';
return (str);
}
