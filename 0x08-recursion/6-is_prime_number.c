#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 *  is_divisible - Checks if a number is divisible.
 * @num: the number is to be checked
 * @div: divisor
 *
 * Return: If the number is diviaible by -0.
 *  if the number is divosible by -1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
	return (1);

	return (is_divisible(num, div + 1));
}
