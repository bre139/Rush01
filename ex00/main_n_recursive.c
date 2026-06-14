/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_n_recursive.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/12 18:36:42 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 13:12:15 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int skyscraper(char *inputs)
{
	int row = 0;
	int column = 0;
	char *board = init_board();
	int heights[] = {1, 2, 3, 4};
}


int solveSkyscraper(int board[4][4])
{
	for (int c = 0; c < 4; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			if (board[r][c] == 0)
			{
				for (int try = 1; try <= 4; try++)
				{
					if (/*is valid placement function(board, number_we_want_to_try, r, c)*/ + /*is valid placement for clues(board, try, r, c)*/)
					{
						board[r][c] = try;
								
						if(solveSkyscraper(board))
						{
							return (1);
						}
						else
						{
							board[r][c] = 0;
						}
					}
				}
				return (0);
			}
		}
	}
	return (1);
}

int init_board()
{
	int init_board [4][4] = {
    {1, 2, 3, 0},
	{0, 0, 0, 2},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
	};
	return(init_board);
}

int main(int argc, char **argv)
{
	int a;

	a = argc;
	skyscraper(argv[1]);
	return (0);
}