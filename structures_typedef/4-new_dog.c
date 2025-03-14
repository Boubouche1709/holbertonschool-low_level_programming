#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
int i, name_len = 0, owner_len = 0;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;
name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
for (i = 0; i <= name_len; i++)
name_copy[i] = name[i];
owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
for (i = 0; i <= owner_len; i++)
owner_copy[i] = owner[i];
d->name = name_copy;
d->age = age;
d->owner = owner_copy;
return (d);
}
