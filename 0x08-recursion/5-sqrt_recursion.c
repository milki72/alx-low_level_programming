#include "main.h"

int actual_sqrt_recursion(int num, int i);

/**
 * _sqrt_recursion - Returns the square root of a number.
 * @num: a number to calculate the square root.
 *
 * Return: The result of square root.
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}

/**
 * actual_sqrt_recursion - recurses to find square root of a number.
 * @num: number to calculate square root.
 * @i: iterator.
 *
 * Return: the result of square root.
 */
int actual_sqrt_recursion(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (actual_sqrt_recursion(num, i + 1));
}
