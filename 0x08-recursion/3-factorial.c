#include "main.h"
/**
 * factorial - Returns input number num factorial
 * @num: Input number num where factorial measured.
 * Return: factorial of num
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
