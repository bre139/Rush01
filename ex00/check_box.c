/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_box.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 07:41:16 by breheg        #+#    #+#                 */
/*   Updated: 2026/06/14 14:57:59 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int checkRowCol(int matrix[4][4], int i, int *c, int j)
{
	if (check_row_left(matrix[i], c[8 + i],4) == 0)
		return (0);
	if (check_row_right(matrix[i], c[12 + i], 4) == 0)
		return (0);
	if (check_col_top(matrix, c[i],4, j) == 0)
		return (0);
	if(check_col_bottom(matrix, c[i+4],4, j) == 0)
		return (0);
	return (1);
}

int checkRow(int matrix[4][4], int i, int *c, int n)
{
	if (check_row_left(matrix[i], c[8 + i],n) == 0)
		return (0);
	if (check_row_right(matrix[i], c[12 + i], n) == 0)
		return (0);
	return (1);
}

int checkCol(int matrix[4][4], int i, int *c, int j)
{
	if (check_col_top(matrix, c[i],4,j) == 0)
		return (0);
	if(check_col_bottom(matrix, c[i+4],4, j) == 0)
		return (0);
	return (1);
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
