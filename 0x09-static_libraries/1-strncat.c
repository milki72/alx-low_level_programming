#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most nby bytes from mcp
 * @mst: input value
 * @mcp: input value
 * @nby: input value
 *
 * Return: mst
 */
char *_strncat(char *mst, char *mcp, int nby)
{
	int i;
	int j;

	i = 0;
	while (mst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nby && mcp[j] != '\0')
	{
	mst[i] = mcp[j];
	i++;
	j++;
	}
	mst[i] = '\0';
	return (mst);
}
