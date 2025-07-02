#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
* main - entry point of the code
* @argc: argument count
* @argv: arguments vector
* Return: 0 always success
*/

int main(int argc, char *argv[])
{
int index, index2;
int sum = 0;
if (argc > 1)
{
	for (index = 1; index < argc; index++)
	{
		for (index2 = 0; argv[index2][index2]; index2++)
		{
			if (!isdigit(argv[index][index2]))
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
