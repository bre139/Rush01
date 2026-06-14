/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/13 13:40:30 by akorthou      #+#    #+#                 */
/*   Updated: 2026/06/14 22:23:49 by albarnet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_imput(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (str[j] <= '1' || str[j] >= '4')
			{
				j++;
			}
		}
		i++;
	}
}

void	print_error(void)
{
	write(1, "error", 5);
}
