#include "main.h"

/**
* string_toupper - print an array and reverse the order
* @str: string to change
* Return: string in upper
*/

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
str[i] = str[i] - 32;
i++;
}
return (str);
}
