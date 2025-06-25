#include "main.h"

/**
 * rev_string - print a string
 * @s: string to print
 */

void rev_string(char *s)
{
char *rev, swap;
rev = s;
for (; *rev; rev++)
{
}
rev--;
for (; s < rev; s++)
{
swap = *rev;
*rev = *s;
*s = swap;
rev--;
}
}
