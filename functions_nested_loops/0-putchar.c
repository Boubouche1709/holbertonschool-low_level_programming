#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main -entry point of the code
 * Return: always 0 success
 */

int main(void)
{
char c[] = "_putchar\n";
(write(1, &c, 9));
return (0);
}
