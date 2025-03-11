#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return a pointer to a new space
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string or NULL
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
dup_str = malloc((length + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
for (i = 0; i < length; i++)
dup_str[i] = str[i];
dup_str[length] = '\0';
return (dup_str);
}
