#include "main.h"

/**
 *  _putchar - writes the character c to stdout
 *  @c: the charecter is printed
 *  Return: On success 1
 *  On  ero, -1is returned to errno is set approximately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
