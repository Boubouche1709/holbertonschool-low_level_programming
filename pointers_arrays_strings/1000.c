#include <stdio.h>

int main() 
{
int x = 42;
int *px = &x;
printf("Valeur de x : %d\n", x);
printf("Adresse de x : %p\n", &x);
printf("Valeur de px (adresse) : %p\n", px);
printf("Valeur pointée par px : %d\n", *px);
return 0;
}
