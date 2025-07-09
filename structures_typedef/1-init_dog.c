#include "dog.h"
#include <stdio.h>

/**
* init_dog - initialise the structure
* @d: pointer to the structure
* @name: new name
* @age: new age
* @owner: new owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
