#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks for alphabetic upperca
 *se
 *@c: input integer
 *Return: 1 for true else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
