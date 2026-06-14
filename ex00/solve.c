/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 07:35:33 by breheg            #+#    #+#             */
/*   Updated: 2026/06/14 07:36:51 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// the solve should be added

int	is_valid_place(int grid[4][4], int row, int col)
{
	int	n;

	n = grid[row][col];
	if (!check_box_allowed_row(grid[row], n, col))
		return (0);
	if (!check_box_allowed_col(grid, n, row, col))
		return (0);
	return (1);
}