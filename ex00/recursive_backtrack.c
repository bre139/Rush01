/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   recursive_backtrack.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/12 18:36:42 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 21:16:29 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int solveSkyscraper(int grid[4][4], int *constraints)
{
	int c;
	int r;
	
	c = 0;
	while (c < 4)
	{
		r = 0;
		while (r < 4)
		{
			if (grid[r][c] == 0)
			{
				solveskyscraper_trynewnumber(grid, r, c, constraints);
			}
			r++;
		}
		c++;
	}
	return (1);
}

int solveskyscraper_trynewnumber(int grid[4][4], int row, int column, int *constraints)
{
	int try_number;
	
	try_number = 1;
	while(try_number <= 4)
	{
		if (/*solver function*/)
		{
			grid[row][column] = try_number;

			if(solveSkyscraper(grid, constraints))
			{
				return (1);
			}
			else
			{
				grid[row][column] = 0;
			}
		}
		try_number++;
	}
	return (0);
}
