#include "main.h"
/**
 *_abs - computes the absolute value
 * of an integer.
 *
 *@t: inputs number as integer.
 *
 *Return: absolute value
 *
 */
int _abs(int t)
{
	if (t >= 0)
	{
		return (t);
	}
	else
	{
		return (t * -1);
	}
}
