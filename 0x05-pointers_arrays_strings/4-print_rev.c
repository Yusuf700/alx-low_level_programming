#include "main.h"

/**
 * print_rev - prints a string in a reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		for (y = y - 1; y >= 0; y--)
			_putchar(s[y]);

		_putchar('\n');
	}
}
