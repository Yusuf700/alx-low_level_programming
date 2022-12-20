#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elwment of an array
 *@a: array
 *@n: numbers of value to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{ 
		printf("%d", a[t];
		if (t != n - 1)
			printf(" , ");
	}

	printf("\n");

}
