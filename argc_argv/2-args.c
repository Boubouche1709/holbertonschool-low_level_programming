#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
