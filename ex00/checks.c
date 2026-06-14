/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:40:30 by akorthou          #+#    #+#             */
/*   Updated: 2026/06/14 02:26:16 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_cheak_imput(char *str)
{
	
}
void	print_error(void)
{
	write(1, "error", 5);
}

int	check_row_left(int row[4], int constraint, int n_col)
{
	int	j;
	int	max;
	int	count;

	j = 0;
	max = 0;
	count = 0;
	while(j < n_col)
	{
		if (row[j] > max)
		{
			max = row[j];
			count++;
		}
		j++;
	}
	if (count == constraint){
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_row_right(int row[4], int constraint, int n_col)
{
	int	j;
	int	max;
	int	count;

	j = n_col-1;
	max = 0;
	count = 0;
	while(j >= 0)
	{
		if (row[j] > max)
		{
			max = row[j];
			count++;
		}
		j--;
	}
	if (count == constraint){
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_col_bottom(int matrix[4][4], int constraint, int n_row, int j)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while(i < n_row)
	{
		if (matrix[i][j] > max)
		{
			max = matrix[i][j];
			count++;
		}
		i++;
	}
	if (count == constraint){
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_col_top(int matrix[4][4], int constraint, int n_row, int j)
{
	int	i;
	int	max;
	int	count;

	i = n_row-1;
	max = 0;
	count = 0;
	while(i >= 0)
	{
		if (matrix[i][j] > max)
		{
			max = matrix[i][j];
			count++;
		}
		i--;
	}
	if (count == constraint){
		return (1);
	}
	else
	{
		return (0);
	}
}

int check_box_allowed_row(int row[4], int box, int current)
{
	int j;
	
	j = 0;
	while (j < current)
	{
		if (row[j] == box)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int check_box_allowed_col(int matrix[4][4], int box, int current, int j)
{
	int i;
	
	i = 0;
	while (i < current)
	{
		if (matrix[i][j] == box)
		{
			return (0);
		}
		i++;
	}
	return (1);
}