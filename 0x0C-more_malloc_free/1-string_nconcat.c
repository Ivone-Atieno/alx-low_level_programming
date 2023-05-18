#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates two
 * strings
 * @s1: string to concatenate from
 * @s2: string to append to
 * @n: number of bytes
 *
 * Return: pointer to the newly allocated
 * space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, x, y;

 if (s1 == NULL)
   {
     s1 = "";
   }
 if (s2 == NULL)
   {
     s2 = "";
   }

 len1 = strlen(s1);
 len2 = strlen(s2);

 if (n >= len2)
   {
     n = len2;
   }

 concat = malloc(sizeof(char) * (len1 + n + 1));

 if (concat == NULL)
   {
     return (NULL);
   }

 for (x = 0; x < len1; x++)
   {
     concat[x] = s1[x];
   }

 for (y = 0; y < n; y++)
   {
     concat[x + y] = s2[y];
   }

 concat[x + y] = '\0';

 return (concat);
}
