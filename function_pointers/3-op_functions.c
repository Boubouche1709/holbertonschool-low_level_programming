#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * op_add - add two int
 * @a: first int
 * @b: second int
 * Return: result a + b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub two int
 * @a: first int
 * @b: second int
 * Return: result a - b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - mul two int
 * @a: first int
 * @b: second int
 * Return: result a * b
 * If b is 0, Error
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div two int
 * @a: first int
 * @b: second int
 * Return: result a / b
 * If b is 0, Error
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calcul the rest of div
 * @a: first int
 * @b: second int
 * Return: a % b
 * If b is 0, Error
 */
int op_mod(int a, int b)
{
return (a % b);
}
