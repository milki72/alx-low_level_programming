#include "main.h"

#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @st1: input one to concat
 * @st2: input two to concat
 * Return: concat of st1 and st2
 */

char *str_concat(char *st1, char *st2)

{
	char *conct;

	int i, ci;

	if (st1 == NULL)
		st1 = "";

	if (st2 == NULL)
		st2 = "";

	i = ci = 0;

	while (st1[i] != '\0')
		i++;

	while (st2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;
	while (st1[i] != '\0')
	{
		conct[i] = st1[i];
		i++;
	}

	while (st2[ci] != '\0')

	{
		conct[i] = st2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}

