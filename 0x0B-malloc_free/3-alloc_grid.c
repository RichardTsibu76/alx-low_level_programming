#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - this function returns two 2d array
 *@width: array width
 *@height: array height
 *Return: returns
 */
int **alloc_grid(int width, int height)
{
	int idx, wdx;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	if (matrix != NULL)
	{
		for (idx = 0; idx < height; idx++)
			matrix[idx] = (int *) malloc(width * sizeof(int));
	}
	for (idx = 0; idx < height; idx++)
	{
		if (matrix[idx] == NULL)
		{
			for (idx = 0; idx < height; idx++)
				free(matrix[idx]);
			free(matrix);
		}
		else
		{
			for (wdx = 0; wdx < width; wdx++)
			matrix[idx][wdx] = 0;
		}
	}
	return (matrix);
}
