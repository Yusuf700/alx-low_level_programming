#include "main.h"

/**
 * _islower - checks if a characteris lowercase
 * @c: the character
 * Return: 1 if letter in lowercase, 0 if not
 */

int 3_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
