#include "main.h"
/**
 * _strspn - Entry point
 * @st: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *st, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*st)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*st == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		st++;
	}
	return (n);
}
