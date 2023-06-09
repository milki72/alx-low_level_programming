#include "main.h"
/**
 * _strpbrk - Entry point
 * @st: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *st, char *accept)
{
	int k;

	while (*st)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*st == accept[k])
		return (st);
		}
	st++;
	}

return ('\0');
}
