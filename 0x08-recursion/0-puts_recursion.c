#include "main.h"

/**
 * _puts_recursion - prints out a string followed by a new line
 * @s: The string is printed
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar("\n");
}
