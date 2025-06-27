#include "main.h"

/**
* leet - replace some letters by digit
* @str: string to change
* Return: string
*/

char *leet(char *str)
{
char *letter = "aAeEoOtTlL";
char *number = "4433007711";
int i = 0, j;
while (str[i] != '\0')
{
for (j = 0; j <= 10; j++)
{
if (str[i] == letter[j])
{
str[i] = number[j];
}
}
i++;
}
return (str);
}
