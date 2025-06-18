#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}
