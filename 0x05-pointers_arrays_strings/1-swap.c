#include "main.h"

/**
 * swap_int - initial swap of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
