#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min_num: minimum range of values stored
 * @max_num: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min_num, int max_num)
{
	int *ptr;
	int a, size;

	if (min_num > max_num)
		return (NULL);

	size = max_num - min_num + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min_num <= max_num; a++)
		ptr[a] = min_num++;

	return (ptr);
}

