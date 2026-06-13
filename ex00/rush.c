/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/13 15:19:14 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/13 22:08:42 by akorthou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <header.h>


int	check_row_left(int *row, int constraint, int n_col);
int	check_row_right(int *row, int constraint, int n_col);
int	check_col_bottom(int *matrix, int constraint, int n_row, int j);
int	check_col_top(int *matrix, int constraint, int n_row, int j);
int check_box_allowed_row(int *row, int box, int current);
int check_box_allowed_col(int *matrix, int box, int current, int j);

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

int place_boxes(int **grid, int i, int j, int n)
{
	int	placed_all_boxes;

	placed_all_boxes =0;
	
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
	parse_input(input,constraints);
	place_boxes(grid, i, j, n);
	
}