#include "main.h"
/**
 * _strncpy - copy a string
 * @mst: input value
 * @mcp: input value
 * @nby: input value
 *
 * Return: mst
 */
char *_strncpy(char *mst, char *mcp, int nby)
{
	int j;

	j = 0;
	while (j < nby && mcp[j] != '\0')
	{
		mst[j] = mcp[j];
		j++;
	}
	while (j < nby)
	{
		mst[j] = '\0';
		j++;
	}

	return (mst);
}
