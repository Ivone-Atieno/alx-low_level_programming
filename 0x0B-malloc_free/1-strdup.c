#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string.
 * @str: input as str
 * Return: a pointer to the new string
 *which is a duplicate of the old string
 */

char *_strdup(char *str)
{
	char *str_new;
	int l;

if (str == NULL)
{
	return (NULL);
}

l = strlen(str) + 1;
str_new = malloc(l);
if (str_new == NULL)
{
	return (NULL);
}
strcpy(str_new, str);
return (str_new);
}
