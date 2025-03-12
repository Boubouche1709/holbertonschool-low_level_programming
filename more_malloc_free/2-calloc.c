#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of element
 * @size: size of element in bytes
 *
 * Return: pointer to the allocate memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
p = ptr;
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (ptr);
}
