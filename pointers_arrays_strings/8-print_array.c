#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints  elements of an array of integer
 *
 * @a: pointer to an int
 *
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
