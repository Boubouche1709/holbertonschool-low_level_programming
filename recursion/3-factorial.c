#include "main.h"

/**
* factorial - function that returns the factorial of a given number
* @n: int to multiplicate
* Return: -1 if the digit is negative
*/

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}
	return (n * factorial(n - 1));
}
