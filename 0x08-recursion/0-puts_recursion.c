#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - this function prints a string followed by a new line.
 * @s: it is the string parameter that is passes to the function to be printed.
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '0')
	{
		_putchar('\n');
	}
	else if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		}
		else
	{
		_putchar('\n');
	}

}

