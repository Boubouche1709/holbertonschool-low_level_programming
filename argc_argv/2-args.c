#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - entry point of the code
* @argc: argument count
* @argv: arguments vector
* Return: 0 always success
*/

int main(int argc, char *argv[])
{
int index;
for (index = 0; index < argc; index++)
	{
	printf("%s\n", argv[index]);
	}
	return (0);
}
