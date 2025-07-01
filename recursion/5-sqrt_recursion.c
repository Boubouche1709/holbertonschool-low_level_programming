#include "main.h"
int square(int i, int n);

/**
* _sqrt_recursion - Find a root square number
* @n: int to check
* Return: natural square root of a number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (square(n, 0));
}

/**
* square - calculate the square
* @i: int
* @n: the square number
* Return: natural square root of a number
*/
int square(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (square(n, i + 1));
}
