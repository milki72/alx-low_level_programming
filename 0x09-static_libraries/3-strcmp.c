#include "main.h"
/**
 * _strcmp - compare string values
 * @st1: input value
 * @st2: input value
 *
 * Return: st1[i] - st2[i]
 */
int _strcmp(char *st1, char *st2)
{
	int i;

	i = 0;
	while (st1[i] != '\0' && st2[i] != '\0')
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
	i++;
	}
	return (0);
}
