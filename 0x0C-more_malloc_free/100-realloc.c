#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr_pre: pointer to the memory previsouly allocated by malloc
 * @oldsize_mm: size of the allocated memory for ptr_pre
 * @newsize_mm: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr_pre, unsigned int oldsize_mm, unsigned int newsize_mm)
{
	char *ptr1;
	char *oldptr;
	unsigned int i;

	if (newsize_mm == oldsize_mm)
		return (ptr_pre);

	if (newsize_mm == 0 && ptr_pre)
	{
		free(ptr_pre);
		return (NULL);
	}

	if (!ptr_pre)
		return (malloc(newsize_mm));

	ptr1 = malloc(newsize_mm);
	if (!ptr1)
		return (NULL);

	oldptr = ptr_pre;

	if (newsize_mm < oldsize_mm)
	{
		for (i = 0; i < newsize_mm; i++)
			ptr1[i] = oldptr[i];
	}

	if (newsize_mm > oldsize_mm)
	{
		for (i = 0; i < oldsize_mm; i++)
			ptr1[i] = oldptr[i];
	}

	free(ptr_pre);
	return (ptr1);
}

