#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: input as string 1
 * @s2: input 2 to concatenatet
 * Return: pointer to the concatenated
 * string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1, len2;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

concat = malloc(len1 + len2 + 1);

if (concat == NULL)
	return (NULL);

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, len2 + 1);
return (concat);
}
