#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - Prints strings
 * @separator: The string to be printed
 * between strings
 * @n: The number of strings to be passed
 *@...: Different number of strings to be printed.
 * Return - void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list str_list;

	va_start(str_list, n);

for (; i < n; i++)
{
	str = va_arg(str_list, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(str_list);
}
