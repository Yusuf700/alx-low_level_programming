#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elwment of an array
 *@a: a pointer yo an int that will be updated
 *@n: numbers of value to be printed
 */

void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
