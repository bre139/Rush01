/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/13 15:19:14 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 01:00:44 by akorthou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <header.h>

int	*parse_input(char *str, int *result)
{
	int i;

	i = 0;
	while ( str[i]!= 0)
	{
		result[i/2] = (int)str[i] - '0';
		i+=2;
	}
	return (result);
} 

void init_grid(int grid[4][4], int n)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		while (i < n) 
		{
			grid[i][j] = 0;
			i++;
		}
		j++;
	}
}


void place_boxes(int grid[4][4], int i, int j, int n)
{
	int	placed_all_boxes;
	int w;
	

	placed_all_boxes =0;
	w = 1;
	while (w <= n){
		if (check_box_allowed_row(grid[i], w, j) && check_box_allowed_col(grid,w,i, j) && grid[i][j] == 0)
		{
			grid[i][j] = w;
			if(i == n-1 && j == n-1)
			{
			}
			else if (j == n-1)
			{
				place_boxes(grid, i + 1, 0, n);
			}
			else 
			{
				place_boxes(grid, i, j+1, n);
			}
		
		}
	}	
	
}
int	 main(void)
{
	char input[]= "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int	constraints[16];
	int n;
	int grid[4][4];
	int i;
	int j;
	
	
	n = 4;
	i = 0;
	j = 0;
	init_grid(grid, n);
	parse_input(input,constraints);
	place_boxes(grid, i, j, n);
	
}