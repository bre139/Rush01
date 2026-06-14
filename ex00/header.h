/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 01:14:33 by breheg            #+#    #+#             */
/*   Updated: 2026/06/14 07:31:00 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.h"

#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	check_row_left(int row[4], int constraint, int n_col);
int	check_row_right(int row[4], int constraint, int n_col);
int	check_col_bottom(int matrix[4][4], int constraint, int n_row, int j);
int	check_col_top(int matrix[4][4], int constraint, int n_row, int j);
int checkRowCol(int matrix[4][4], int i, int *c, int n);
int checkRow(int matrix[4][4], int i, int *c, int n);
int checkCol(int matrix[4][4], int i, int *c, int n);
int check_box_allowed_row(int row[4], int box, int current);
int check_box_allowed_col(int matrix[4][4], int box, int current, int j);

int	*parse_input(char *str, int *result);
void init_grid(int grid[4][4], int n);
void place_boxes(int grid[4][4], int i, int j, int *c);
void put_matrix(int matrix[4][4], int n);

int	check_input(char *str);
int	is_valid_place(int grid[4][4], int row, int col);
int	check_all_constraints(int grid[4][4], int constraints[16]);
#endif

/*
when this command is run:  cc -Wall -Wextra -Werror -o rush01 *.c
becouse of cc *.c all .c files wil be compiled.
there is no need to include any other liberys then this one becouse there are all in here
if we need to add a libery add it in our header
*/