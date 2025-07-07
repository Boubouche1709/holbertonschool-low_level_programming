#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of the array
* @c: character inside the array
* Return: pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *tab;

if (size == 0)
	return (NULL);

tab = malloc(size * sizeof(char));
	if (tab == NULL)
		return (NULL);

for (i = 0; i < size; i++)
	tab[i] = c;
return (tab);
}
