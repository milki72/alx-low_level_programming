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
	int i;

        // allocate memory for rows
	grid = (int **)malloc(sizeof(int **) * height);

        // memory allocation failed
	if (grid == NULL)
		return (NULL);

	//allocate memory for each row
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int *) * width);
	}
	return (grid);
}

