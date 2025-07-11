#include "main.h"

int isprime(int num, int div);

/**
*is_prime_number - functions to check an int
*@n: int to check
* Return: 1 for success 0 otherwise
*/
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (isprime(n, div));
}

/**
* isprime - fonction to check if is a prime number
* @num: int to check
* @div: the divisor
* Return: 1 for success 0 otherwise
*/
int isprime(int num, int div)
{
if (num % div == 0)
return (0);
if (div * div > num)
return (1);
return (isprime(num, div + 1));
}
