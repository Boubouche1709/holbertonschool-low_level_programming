#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the value of two integers
 *
 * @a: pointer to an int
 *
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
