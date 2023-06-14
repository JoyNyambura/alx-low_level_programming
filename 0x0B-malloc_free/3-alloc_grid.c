#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - allocate space for a 2D array
 *@width: width of 2D array
 *@height: height of 2D array
 *
 *Return: ptr to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);


	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
