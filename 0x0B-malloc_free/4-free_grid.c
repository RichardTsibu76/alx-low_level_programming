#include "main.h"
#include <stdlib.h>

/**
 *free_grid - this function frees 2d array
 *@height: the height
 *@grid: a pointer to pointer(address).
 *Return: the return value
 */
void free_grid(int **grid, int height)
{

	int idx;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);


}
