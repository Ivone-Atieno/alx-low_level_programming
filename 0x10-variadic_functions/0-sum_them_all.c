#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all -Returns the sum of all its
 *paramters.
 *@n: The number of paramters to be passed
 *@...: Parameters to calculate its sum.
 *Return: If n == 0 return 0 else the sum
 * of all the passed parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
