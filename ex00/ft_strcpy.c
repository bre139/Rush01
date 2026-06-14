/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akadirog <akadirog@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/11 16:11:13 by akadirog      #+#    #+#                 */
/*   Updated: 2026/06/14 18:46:29 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
