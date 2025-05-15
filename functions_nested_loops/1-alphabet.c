#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - function to print alphabet
 */
void print_alphabet(void)
{
char c[] = "abcdefghijklmnopqrstuvwxyz\n";
write(1, c, sizeof(c) - 1);
return;
}
