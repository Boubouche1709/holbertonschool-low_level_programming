#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - range an array from min to max
 * @min: minimal value
 * @max: maximal value
 *
 * Return: pointer to array, NULL if malloc fail or min > max
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++, min++)
{
array[i] = min;
}
return (array);
}
