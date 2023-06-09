#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @strt: input
 * @ch: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *strt, char ch)
{
	int i = 0;

	for (; strt[i] >= '\0'; i++)
	{
		if (strt[i] == ch)
			return (&strt[i]);
	}
	return (0);
}
