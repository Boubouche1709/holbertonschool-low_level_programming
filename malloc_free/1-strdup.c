#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - creates an array of chars
* @str: string to duplicate
* Return: pointer to the duplicate string or NULL
*/

char *_strdup(char *str)
{
int i, lenght = 0;
char *str2;

if (str == 0)
	return (NULL);

while (str[lenght] != '\0')
	lenght++;

str2 = malloc(sizeof(char) * (lenght + 1));
if (str2 == NULL)
	return (NULL);


for (i = 0; i < lenght; i++)
	str2[i] = str[i];

return (str2);
}
