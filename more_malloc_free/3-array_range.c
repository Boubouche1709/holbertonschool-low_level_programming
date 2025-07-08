#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array
 * @min: size min
 * @max: size max
 * Return: NULL or pointer to the array
 */
int *array_range(int min, int max)
{
int i = 0, size = 0;
int *array;

if (min > max)
	return (NULL);
size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
	return (NULL);
for (; i < size; i++)
{
array[i] = min++;
}
return (array);
}

