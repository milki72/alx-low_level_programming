#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@mst: memory where is stored
 *@mcp: memory where is copied
 *@nby: number of bytes
 *
 *Return: copied memory with nby byted changed
 */
char *_memcpy(char *mst, char *mcp, unsigned int nby)
{
	int j = 0;
	int i = nby;

	for (; j < i; j++)
	{
		mst[j] = mcp[j];
		nby--;
	}
	return (mst);
}
