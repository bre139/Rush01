/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:28:02 by breheg            #+#    #+#             */
/*   Updated: 2026/06/13 22:01:54 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <header.h>

#ifndef HEADER_H
#define HEADER_H
int	check_row_left(int *row, int constraint, int n_col);
int	check_row_right(int *row, int constraint, int n_col);
int	check_col_bottom(int *matrix, int constraint, int n_row, int j);
int	check_col_top(int *matrix, int constraint, int n_row, int j);
int check_box_allowed_row(int *row, int box, int current);
int check_box_allowed_col(int *matrix, int box, int current, int j);

int	*parse_input(char *str, int *result);
int place_boxes(int **grid, int i, int j, int n);

#endif