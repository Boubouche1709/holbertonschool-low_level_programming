#include <stdio.h>

/**
 * main - entry point of the code
 * Return: always 0 success
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
putchar('\n');
return (0);
}
