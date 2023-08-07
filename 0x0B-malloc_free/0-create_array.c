#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of string.
 * @size: array size.
 * @c:a character to print.
 *
 * Return: a character value.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

