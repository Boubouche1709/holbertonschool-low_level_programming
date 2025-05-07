#include <stdio.h>
/**
 * main -entry point of the code
 * Return: always  (Success)
 */
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
while (alphabet[i])
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
