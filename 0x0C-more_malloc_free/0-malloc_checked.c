#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @nby: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int nby)
{
	void *ptr;

	ptr = malloc(nby);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
