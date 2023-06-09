#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by mcp
 * @mst: copy to
 * @mcp: copy from
 * Return: string
 */
char *_strcpy(char *mst, char *mcp)
{
	int l = 0;
	int x = 0;

	while (*(mcp + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		mst[x] = mcp[x];
	}
	mst[l] = '\0';
	return (mst);
}
