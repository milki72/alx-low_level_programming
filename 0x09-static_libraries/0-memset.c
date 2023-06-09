#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @strt: starting address of memory to be filled
 * @dv: the desired value
 * @nby: number of bytes to be changed
 *
 * Return: changed array with new value for nby bytes
 */
char *_memset(char *strt, char dv, unsigned int nby)
{
	int i = 0;

	for (; nby > 0; i++)
	{
		strt[i] = dv;
		nby--;
	}
	return (strt);
}
