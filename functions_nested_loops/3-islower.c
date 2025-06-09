#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * islower - check if the chrracter is a lowercase
 * Return: 1 if is a lowercase, 0 otherwise
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
