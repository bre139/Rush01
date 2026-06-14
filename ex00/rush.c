/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/13 15:19:14 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 13:21:34 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



void init_grid(int grid[4][4], int n)
{
	int i;
	int	j;

	
	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n) 
		{
			grid[i][j] = 0;
			i++;
		}
		j++;
	}
}


void place_boxes(int grid[4][4], int i, int j, int *c)
{
	int w;

	w = 1;
	while (w <= 4){
		if (check_box_allowed_row(grid[i], w, j) && check_box_allowed_col(grid,w,i, j) && grid[i][j] == 0)
		{
			grid[i][j] = w;
			if(i == 4-1 && j == 4-1)
			{
				if (checkRowCol(grid, i, c, j) == 0)
					grid[i][j] = 0;
			}
			else if (j == 4-1)
			{
				if (checkRow(grid, i, c, 4) == 0)
					grid[i][j] = 0;
				else
					place_boxes(grid, i + 1, 0, c);
			}
			else if (i == 4-1)
			{
				if (checkCol(grid, i, c, j) == 0)
					grid[i][j] = 0;
				else
					place_boxes(grid, i, j+1, c);
			}
			else 
			{
				place_boxes(grid, i, j+1, c);
			}
		}
		w++;
	}	
	
}
