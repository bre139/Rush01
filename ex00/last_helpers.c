/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 07:01:01 by breheg            #+#    #+#             */
/*   Updated: 2026/06/14 07:36:26 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_input(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			count++;
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}



int	check_all_constraints(int grid[4][4], int constraints[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_col_top(grid, constraints[i], 4, i))
			return (0);
		if ((!check_col_bottom(grid, constraints[i + 4], 4, i)))
			return (0);
		if ((!check_row_left(grid, constraints[i + 8], 4)))
			return (0);
		if ((!check_row_right(grid, constraints[i + 12], 4)))
			return (0);
		i++;
	}
}