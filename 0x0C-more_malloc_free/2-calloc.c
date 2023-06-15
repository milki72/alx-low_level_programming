#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @ms: memory space to be filled
 * @scp: char to copy
 * @nby: number of times to copy nby
 *
 * Return: pointer to the memory space ms
 */
char *_memset(char *ms, char scp, unsigned int nby)
{
	unsigned int i;

	for (i = 0; i < nby; i++)
	{
		ms[i] = scp;
	}

	return (ms);
}

/**
 * *_calloc - allocates memory for an array
 * @membr_a: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int membr_a, unsigned int size)
{
	char *ptr;

	if (membr_a == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * membr_a);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, membr_a * size);

	return (ptr);
}
