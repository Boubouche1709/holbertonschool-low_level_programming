#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked -  allocates memory using malloc
* @b: allocates memory
* Return: pointer to the allocate memory or 98 if malloc fail
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
