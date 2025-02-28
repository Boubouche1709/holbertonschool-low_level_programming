#include "main.h"
#include <stdio.h>

/**
 * cap_string - change the first letter lower to upper
 *
 * @str: string to change
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
int i = 0;
int capitalize = 1;
while (str[i] != '\0')
{
if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;
}
else
{
capitalize = 0;
}
i++;
}
return (str);
}
