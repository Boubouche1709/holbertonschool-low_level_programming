#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search an int
 * @array: array of int
 * @size: number of element
 * @cmp: function pointer
 * Return: value of element or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
