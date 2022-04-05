#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Free_grid - Frees a 2-dimensional grid previously created by
 * Alloc_grid function.
 * @grid: matrix double pointer
 * @height: rows (pointer)
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
