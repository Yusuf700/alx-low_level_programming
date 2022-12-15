#include "main.h"
#include <unistd.h>i

/**
  * main - check the functions provided.
  *
  * Return 1, if c is a digit
  */

int _isdigit(int c)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
