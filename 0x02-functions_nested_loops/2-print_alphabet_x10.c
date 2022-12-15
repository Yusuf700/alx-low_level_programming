 #include "main.h"

/**
 *  print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
int ten;
char y;
for (ten = 0; ten <= 9; ten++)
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
_putchar('\n');

}
return (0);
}
