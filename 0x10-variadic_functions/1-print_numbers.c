#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers
 *@separator: The string to be printed
 * between numbers.
 * @n: The number of integers to be passed
 * @...:Number of parameters to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num_s;

	va_start(num_s, n);

for (; i < n; i++)
{
	printf("%d", va_arg(num_s, int));
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");

va_end(num_s);
}
