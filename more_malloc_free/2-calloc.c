#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc commande
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: NULL if fails otherwise a pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memoire;
char *check;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
	memoire = malloc(size * nmemb);
if (memoire == NULL)
{
return (NULL);
}
	check = memoire;
for (i = 0; i < (size * nmemb); i++)
{
check[i] = '\0';
}
return (memoire);
}
