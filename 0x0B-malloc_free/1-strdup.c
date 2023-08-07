#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a string.
 * @str: a string parameter.
 *
 * Return: a pointer to character
 */

char *_strdup(char *str)
{
	int j = 0;
	static char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	dup = (char *) malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}

	return (dup);
}

