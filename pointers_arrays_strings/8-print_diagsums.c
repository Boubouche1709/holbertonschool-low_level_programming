#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonal
 * @a: array of the matrix
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
char buffer[50];
int index = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
index += sprintf(buffer, "%d, %d", sum1, sum2);
buffer[index] = '\0';
puts(buffer);
}
