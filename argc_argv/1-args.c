#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main -entry point of the code
* @argc: argument count
* @argv: arguments vector
* Return: 0 always success
*/

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
