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
int i = 0;
char *str;
char *separator = "";
va_list args;
va_start(args, format);
while (format && format[i])
{
printf("%s", separator);
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
i++;
continue;
}
separator = ", ";
i++;
}
va_end(args);
printf("\n");
}
