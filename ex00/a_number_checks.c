/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   a_number_checks.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akadirog <akadirog@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 21:26:36 by akadirog      #+#    #+#                 */
/*   Updated: 2026/06/14 22:23:22 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int number_row_check(int board[4][4], int number_tocheck, int r, int c)
{
	for (int i = 0; i <= 4; i++)
	{
		if (board[r][i] == number_tocheck)
		{
			return (0);
		}
	}
	return (1);
}

int number_column_check(int board[4][4], int number_tocheck, int r, int c)
{
	for (int i = 0; i <= 4; i++)
	{
		if (board[i][c] == number_tocheck)
		{
			return (0);
		}
	}
	return (1);
}

int	check_row_left(int row[4][4], int constraint, int r, int c)
{
	//CONSTRAINTS or sides check	
}
