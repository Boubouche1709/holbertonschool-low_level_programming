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
int length1 = 0;
int length = 0;
char *str2;

if (str == 0)
	return (NULL);

while (str[length] != '\0')
	length++;

str2 = malloc(sizeof(char) * (length + 1));
if (str2 == NULL)
	return (NULL);


for (length1 = 0; length1 < length; length1++)
	{
	str2[length1] = str[length1];
	}
	str2[length] = '\0';

return (str2);
}
