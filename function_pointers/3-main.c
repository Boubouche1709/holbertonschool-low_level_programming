#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - entry point of the code
 * @argc: number of argument
 * @argv: number of vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
if (operator == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
result = operator(num1, num2);
printf("%d\n", result);
return (0);
}
