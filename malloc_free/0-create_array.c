#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer to array, NULL if it fail
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
