#include "main.h"
/**
 * _strcat - concatenates two strings
 * @mst: input value
 * @mcp: input value
 *
 * Return: void
 */
char *_strcat(char *mst, char *mcp)
{
	int i;
	int j;

	i = 0;
	while (mst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (mcp[j] != '\0')
	{
		mst[i] = mcp[j];
		i++;
		j++;
	}

	mst[i] = '\0';
	return (mst);
}
