#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: numbers of bytes
 * Return: pointer to a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, length1 = 0, length2 = 0;
char *s3;

if (s1 == NULL && s2 == NULL)
	return (NULL);

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;
if (n > length2)
n = length2;

s3 = malloc(sizeof(char) * (length1 + n + 1));
if (s3 == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
	s3[i] = s1[i];

for (j = 0; j < n; j++)
s3[i + j] = s2[j];

s3[i + j] = '\0';

return (s3);
}

