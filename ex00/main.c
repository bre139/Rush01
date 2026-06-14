/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: breheg <breheg@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/14 01:14:20 by breheg        #+#    #+#                 */
/*   Updated: 2026/06/14 22:24:33 by akadirog      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	 main(int argc, char **argv)
{
	//char input1[]= "4 3 2 1 1 1 2 2 4 3 2 1 1 2 2 2";
	char input[31];
	int	constraints[16];
	int grid[4][4];
	int i;
	int j;

	i = 0;
	j = 0;
	init_grid(grid, 4); 					//itakes int grid[4][4] and modifies all values of it's elements to 0
	if (!(check_input(argv[1])))			//when input check funtion returns 0 this if activates, writes error message and ends main
	{
		write(1, "NU UH WRONG INPUT!", 19);
		return(0);
	}
	ft_strcpy(input, argv);					//copies argv parameters to input char array. than we can use that array to work on it
	parse_input(input, constraints); 		//takes input & parses them to int and adds them to constraints array. after this, constraints array will be ready to use
	place_boxes(grid, i, j, constraints); 	//original function to solve, we never tried, I advise to REMOVE that
	solveSkyscraper(grid, constraints); 	//Solver function with recursive bactracking algorithm
	put_matrix(grid, 4); 					//Prints out matrix at the end
	return (0);
}
