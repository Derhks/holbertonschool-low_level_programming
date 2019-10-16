#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - This is a function prototype
 * @grid: This variable recive the first value of the function main
 * @height: This variable recive the second value of the function main
 * Description: Function that frees a 2 dimensional grid
 * section header: Section description
 */

void free_grid(int **grid, int height)
{
	int cnt1;

	if (grid != NULL)
	{
		if (height > 0)
		{
			for (cnt1 = 0; cnt1 < height; cnt1++)
			{
				free(grid[cnt1]);
			}
			free(grid);
		}
	}
}
