/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   recursive_backtrack.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/12 18:36:42 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 16:27:19 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int solveSkyscraper(int board[4][4])
{
	int c;
	int r;
	
	c = 0;
	while (c < 4)
	{
		r = 0;
		while (r < 4)
		{
			if (board[r][c] == 0)
			{
				solveskyscraper_trynewnumber(board, r, c);
			}
			r++;
		}
		c++;
	}
	return (1);
}

int solveskyscraper_trynewnumber(int board[4][4], int row, int column)
{
	int try_number;
	
	try_number = 1;
	while(try_number <= 4)
	{
		if (/*is valid placement function(board, number_we_want_to_try, r, c)*/ + /*is valid placement for clues(board, try, r, c)*/)
		{
			board[row][column] = try_number;

			if(solveSkyscraper(board))
			{
				return (1);
			}
			else
			{
				board[row][column] = 0;
			}
		}
		try_number++;
	}
	return (0);
}
