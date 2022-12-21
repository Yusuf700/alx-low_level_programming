#include <unistd.h>

/**
 * _putchar - write a character c to stdout
 * @c: the character to print
 *
 * Return: on Success 1
 * On error, -1 is returned, and errno is set approximately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
