#include "main.h"

/**
* _pow_recursion - function that returns the factorial of a given number
* @x: first int
* @y: second int
* Return: -1 if the digit is negative
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
	return (x * _pow_recursion(x, y - 1));
}
