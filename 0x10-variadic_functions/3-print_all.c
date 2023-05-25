#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: list of types of arguments passed
 *@...: numbers of different parameters to
 * be passed
 */

void print_all(const char * const format, ...)
{
	char *str;
	char *s = "";
	int index = 0;

	va_list arg_s;

	va_start(arg_s, format);

if (format)
{
	while (format[index])
	{
		switch (format[index])
		{
		case 'c':
printf("%s%c", s, va_arg(arg_s, int));
break;
		case 'i':
printf("%s%d", s, va_arg(arg_s, int));
break;
		case 'f':
printf("%s%f", s, va_arg(arg_s, double));
break;
		case 's':
str = va_arg(arg_s, char *);
if (!str)
	str = "(nil)";
printf("%s%s", s, str);
break;
default:
	index++;
	continue;
}
s = ",";
index++;
}
}
printf("\n");
va_end(arg_s);
}
