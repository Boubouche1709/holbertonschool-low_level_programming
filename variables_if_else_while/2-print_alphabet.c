#include <stdio.h>

/**
 * Main - starts of the program
 * Description : print the alphabet in lowercase
 * Return : always 0 success
 */

int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return 0;
}
