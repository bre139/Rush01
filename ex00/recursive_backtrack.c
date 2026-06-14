/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_n_recursive.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/12 18:36:42 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 13:57:09 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// int skyscraper(char *inputs)
// {
// 	int row = 0;
// 	int column = 0;
// 	char *board = init_board();
// 	int heights[] = {1, 2, 3, 4};
// }


int solveSkyscraper_iteration(int board[4][4])
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
	int try;
	
	try = 1;
	while(try <= 4)
	{
		if (/*is valid placement function(board, number_we_want_to_try, r, c)*/ + /*is valid placement for clues(board, try, r, c)*/)
		{
			board[row][column] = try;
					
			if(solveSkyscraper(board))
			{
				return (1);
			}
			else
			{
				board[row][column] = 0;
			}
		}
		try++;
	}
	return (0);
}

// int init_board()
// {
// 	int init_board [4][4] = {
//     {1, 2, 3, 0},
// 	{0, 0, 0, 2},
// 	{0, 0, 0, 0},
// 	{0, 0, 0, 0}
// 	};
// 	return(init_board);
// }

// int main(int argc, char **argv)
// {
// 	int a;

// 	a = argc;
// 	skyscraper(argv[1]);
// 	return (0);
// }