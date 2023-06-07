#include "main.h"

int actual_prime(int num, int i);

/**
 * is_prime_number - tells us if a number is a prime number or not.
 * @num: number to evaluate.
 *
 * Return: if num is a prime number 1 is a return value if not 0 is a return value.
 */
int is_prime_number(int num)
{
	if (num <= 1)
	       return (0);
	return (actual_prime(num, num - 1);
}

/**
 * actual_prime - calculates if a number is prime recursively.
 * @num: number to evaluate.
 * @i: iterator
 *
 * Return: if num is a prime number 1 is a return value if not 0 is a return value.
 */
int actual_prime(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0 && i > 0)
		return (0);
	return (actual_prime(num, i - 1));
}
	    
	
