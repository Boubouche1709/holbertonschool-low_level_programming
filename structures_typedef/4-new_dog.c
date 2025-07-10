#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
int len = 0;
while (s[len])
{
len++;
}
return (len);
}

/**
 * _strcpy - copy a string
 * @src: string to copy
 * @dest: copy of the string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
* new_dog - function to create a new dog
* @name: name
* @age: age
* @owner: owner
* Return: pointer to new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

_strcpy(new_name, name);
_strcpy(new_owner, owner);

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

	return (new_dog);
}
