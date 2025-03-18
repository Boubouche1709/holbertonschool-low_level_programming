#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - select the right function
 * @s: operator select by user
 * Return: pointer to the right function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (ops[i].f);
}
