#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar";
int i = 0;
while (c[i] != '\0')
{
putchar(c[i]);
i++;
}
putchar('\n');
return (0);
}
