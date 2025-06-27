#include "main.h"

/**
* cap_string - capitalize all word
* @str: string to change
* Return: string 
*/

char *cap_string(char *str)
{
int i = 0;
int sep;
while (str[i] != '\0')
{
sep = (i == 0) || (str[i - 1] == ' ' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
str[i - 1] == ',' ||
str[i - 1] == '\n' ||
str[i - 1] == '\t' ||
str[i - 1] == ';');
if (sep && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
