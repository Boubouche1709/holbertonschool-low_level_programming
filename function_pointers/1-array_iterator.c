#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>


/**
* array_iterator - function to execute
* @array: an array
* @size: size of the array
* @action: pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array == NULL && action == NULL)
	return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
