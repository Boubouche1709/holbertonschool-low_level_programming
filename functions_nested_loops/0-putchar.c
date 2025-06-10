#include "main.h"

/**
 * main -entry point of the code
 * Return: always 0 success
 */

int main(void)
{
char text[] = "_putchar\n";
int i = 0;

while (text[i] != '\0')
{
_putchar(text[i]);
i++;
}
return (0);
}
