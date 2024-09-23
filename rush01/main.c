/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:18:16 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:13:54 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	hints[16];
	int	grid[4][4];

	ft_init_grid(grid);
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(ft_parse_param(argv[1], hints)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(ft_solve_puzzle(hints, grid, 0)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_print_grid(grid);
	return (0);
}
