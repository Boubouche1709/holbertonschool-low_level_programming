#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */

int main(void)
{
char c[] = "_putchar\n";
write(1, c, sizeof(c) - 1);
return (0);
}
