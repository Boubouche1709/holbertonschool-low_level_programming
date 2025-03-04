#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a substring
 *
 * @haystack: principal str
 *
 * @needle: substring to find
 *
 * Return: to a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
