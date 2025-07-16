#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main  - entry point of the code
* @argc: number of argument
* @argv: array of argument
* Return: always 0 for success or Error code
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*operator)(int, int);
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
operator = get_op_func(argv[2]);
if (!operator)
{
	printf("Error\n");
	exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3])
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
	printf("Error\n");
	exit(100);
}
result = operator(a, b);
printf("%d\n", result);
return (0);
}
