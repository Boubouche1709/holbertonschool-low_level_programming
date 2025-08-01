#include "variadic_functions.h"
/**
* print_all - my function
* @format: string of character
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char type;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
	type = format[i];
	switch (type)
	{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
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
