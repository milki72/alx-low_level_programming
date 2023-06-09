#include "main.h"
/**
 * _strstr - Entry point
 * @haystk: input
 * @ndle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystk, char *ndle)
{
	for (; *haystk != '\0'; haystk++)
	{
		char *l = haystk;
		char *p = ndle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystk);
	}

	return (0);
}
