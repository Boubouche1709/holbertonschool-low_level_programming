#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert to an int
 * Return: value of int
 */

int _atoi(char *s)
{
unsigned int result = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
{
break;
}
i++;
}
return (result *sign);
}
