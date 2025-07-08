#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: first string
 * @s2: second string
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, length1 = 0, length2 = 0;
char *s3;

if (s1 == NULL && s2 == NULL)
	return (NULL);

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

s3 = malloc(sizeof(char) * (length1 + length2 + 1));
if (s3 == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
	s3[i] = s1[i];

for (j = 0; j < length2; j++)
	s3[i + j] = s2[j];

s3[i + j] = '\0';

return (s3);
}
