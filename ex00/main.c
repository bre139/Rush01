/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 01:14:20 by breheg        #+#    #+#                 */
/*   Updated: 2026/06/14 16:25:47 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	 main(int argc, char **argv)
{
	//char input1[]= "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char input[] = argv[1];
	int	constraints[16];
	int n;
	int grid[4][4];
	int i;
	int j;

	n = 4;
	i = 0;
	j = 0;
	init_grid(grid, n); //itakes int grid[4][4] and modifies all values of it's elements to 0
	//error_check(input); ==> error check for input  
	parse_input(input,constraints); //takes input & parses them toint and adds them to constraints array. after this, constraints array will be ready to use
	place_boxes(grid, i, j, constraints); //original function to solve, I advise to REMOVE that
	solveSkyscraper(grid); //Solver function with recursive bactracking algorithm
	put_matrix(grid, n); //Prints out matrix at the end
}