#include <stdlib.h>
#include "main.h"
/**
 * free_grid - returns a pointer
 * @grid: the string
 * @height: the string
 * Return: the pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
