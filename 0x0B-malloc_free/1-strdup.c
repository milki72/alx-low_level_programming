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
	int dup_len;
	static char *dup;

	/* Allocate memory for duplicate */
	dup_len = strlen(str);
	dup = (char *) malloc(sizeof(char) * dup_len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (i <= dup_len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}

