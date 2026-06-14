/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 07:42:31 by breheg        #+#    #+#                 */
/*   Updated: 2026/06/14 15:24:17 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//int *parse input(char *str, int *result)
int	*parse_input(char *str, int *result)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		result[i/2] = (int)str[i] - '0';
		i+=2;
	}
	return (result);
}

