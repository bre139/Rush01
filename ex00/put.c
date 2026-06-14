/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 02:05:10 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 15:49:14 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
// #include <stdio.h> // TO BE REMOVED

void put_matrix(int matrix[4][4], int n)
{
	int	row;
	int col;
	char c;

	row = 0;
	c = '0';
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
				c = matrix[row][col]+'0';
				write(1,&c,1);
				col++;
		}
		c = '\n';
		write(1,&c,1);
		row++;
	}
}

// TO BE REMOVED
/* int main(void)
{
	int grid[4][4] = {
		{1, 2, 3, 4},
		{1, 2, 3, 4},
		{6, 3, 0, 0},
		{0, 0, 3, 4}
	};
	
	put_matrix(grid, 4);
	return (0);
} */