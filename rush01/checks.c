/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:44:33 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:07:41 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_col_is_full(int grid[4][4], int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!(grid[i][col]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_row_is_full(int grid[4][4], int row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!(grid[row][i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkhints(int hints[16], int grid[4][4], int pos, int num)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	grid[row][col] = num;
	if (ft_row_is_full(grid, row))
	{
		if (!((ft_checkhirow(hints, grid, row))))
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	if (ft_col_is_full(grid, col))
	{
		if (!(ft_checkhicol(hints, grid, col)))
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	grid[row][col] = 0;
	return (1);
}
