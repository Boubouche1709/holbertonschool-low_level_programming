#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_name - print use a function pointer
* @name: name to print
* @f: pointer to a function
*/

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
