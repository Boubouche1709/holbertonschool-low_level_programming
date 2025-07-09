#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - function to free memory
* @d: pointer to info of the dog
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	if (d->name != NULL)
	free(d->name);

	if (d->owner != NULL)
	free(d->owner);

	free(d);
}
