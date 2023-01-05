#include "main.h"

/**
 * _strlen_recursion -Return the length of a string
 * @s: is to be measured
 *
 * Return: the lenght of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

}
