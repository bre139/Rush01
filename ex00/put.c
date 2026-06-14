/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akorthou <akorthou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 02:05:10 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 02:13:51 by akorthou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void put_matrix(int matrix[4][4], int n)
{
	int	i;
	int j;
	char c;

	j = 0;
	i = n-1;
	c = '0';
	while (j < n)
	{
		while (i >= 0)
		{
				c = matrix[i][j];
				write(1,&c,1);
				i--;
		}
		c = '\n';
		write(1,&c,1);
		j++;
	}
}