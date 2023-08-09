#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate grid memory for width & height.
 * @width: the size of width parameter.
 * @height: the size of height parameter.
 *
 * Return: a pointer to a pointer to integer.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i,j;

	grid = (int **)malloc(sizeof(int **) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int *) * width);

		if (grid[i] == NULL)
		{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
			{
			free(grid);
			}
		}
		return (NULL);
	}
}

