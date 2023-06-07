#include "main.h"

/**
 * _pow_recursion - Returns the value of a multiplyed by a the power of b-1
 * @a: value of a
 * @b: power or exponential
 *
 * Return: a multiply by a exponential b-1.
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
