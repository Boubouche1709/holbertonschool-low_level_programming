#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>


/**
* int_index - index for int in array
* @array: an array
* @size: size of the array
* @cmp: pointer to the function
* Return: index of array or -1 if is NULL
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
