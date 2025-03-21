#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - print all based on format
 * @format: list of argument to function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
int separator = 1;
va_start(args, format);
while (format && format[i])
{
if (!separator)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
default:
separator = 1;
i++;
continue;
}
separator = 0;
i++;
}
va_end(args);
printf("\n");
}
