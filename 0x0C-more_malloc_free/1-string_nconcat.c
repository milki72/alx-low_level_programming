#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates nby bytes of a string to another string
 * @st1: string to append to
 * @st2: string to concatenate from
 * @nby: number of bytes from st2 to concatenate to st1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *st1, char *st2, unsigned int nby)
{
	char *st;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (st1 && st1[len1])
		len1++;
	while (st2 && st2[len2])
		len2++;

	if (nby < len2)
		st = malloc(sizeof(char) * (len1 + nby + 1));
	else
		st = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!st)
		return (NULL);

	while (i < len1)
	{
		st[i] = st1[i];
		i++;
	}

	while (nby < len2 && i < (len1 + nby))
		st[i++] = st2[j++];

	while (nby >= len2 && i < (len1 + len2))
		st[i++] = st2[j++];

	st[i] = '\0';

	return (st);
}
