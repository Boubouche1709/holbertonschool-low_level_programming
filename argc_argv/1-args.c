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
(void)*argv;
printf("%d\n", argc - 1);
return (0);
}
