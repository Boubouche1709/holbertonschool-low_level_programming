#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to contenate string or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
while (i < len1)
{
concat[i] = s1[i];
i++;
}
while (j < len2)
{
concat[j] = s2[j];
i++;
j++;
}
return (concat);
}
