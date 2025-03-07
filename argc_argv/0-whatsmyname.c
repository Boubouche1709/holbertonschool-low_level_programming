#include "main.h"
#include <stdio.h>
/**
* main - entry point of the program
* @argc: number of argument
* @argv: array of argument
*
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
        int i = 0;
        (void)argc;
        while (argv[0][i] != '\0')
        {
                putchar(argv[0][i]);
                i++;
        }
        putchar('\n');
        return (0);
}
