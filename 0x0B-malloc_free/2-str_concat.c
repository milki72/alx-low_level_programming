#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two string parameter.
 * @s1: string1
 * @s2: string2
 *
 * Return: a pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1;
	size_t len2;
	size_t i;
	size_t j;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	len1 = (s1 != (NULL)) ? strlen(s1) : 0;
	len2 = (s2 != (NULL)) ? strlen(s2) : 0;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);
}

