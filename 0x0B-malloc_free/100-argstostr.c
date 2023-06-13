#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @arc: int input
 * @arv: double pointer array
 * Return: 0
 */
char *argstostr(int arc, char **arv)
{
	int i, n, r = 0, l = 0;
	char *strn;

	if (arc == 0 || arv == NULL)
		return (NULL);

	for (i = 0; i < arc; i++)
	{
		for (n = 0; arv[i][n]; n++)
			l++;
	}
	l += arc;

	strn = malloc(sizeof(char) * l + 1);
	if (strn == NULL)
		return (NULL);
	for (i = 0; i < arc; i++)
	{
	for (n = 0; arv[i][n]; n++)
	{
		strn[r] = arv[i][n];
		r++;
	}
	if (strn[r] == '\0')
	{
		strn[r++] = '\n';
	}
	}
	return (strn);
}
