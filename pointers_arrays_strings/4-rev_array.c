#include "main.h"

/**
* reverse_array - print an array and reverse the order
* @a: int
* @n: lenght of array
*/

void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
