/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 01:14:20 by breheg            #+#    #+#             */
/*   Updated: 2026/06/14 01:23:15 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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