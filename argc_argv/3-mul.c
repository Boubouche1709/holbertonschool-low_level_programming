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
int num;
int index;
int result = 1;
if (argc == 3)
{
	for (num = 1; num < argc; num++)
	{
		index = atoi(argv[num]);
		result = result * index;
	}
printf("%d\n", result);
}
else
	{
	printf("Error\n");
	return (1);
	}
return (0);
}
