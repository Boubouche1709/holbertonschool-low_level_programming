#include "main.h"

/**
* _strlen_recursion - print a string with recursion
* @s: string to print
* Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
int lenght = 0;
	if (*s != '\0')
	{
		lenght++;
		lenght = lenght + _strlen_recursion(s + 1);
	}
return (lenght);
}
