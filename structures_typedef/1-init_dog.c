#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init a variable
 * @d: pointer to init_dog
 * @: pointer to typedef
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
