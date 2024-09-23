/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:59:07 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:04:07 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_is_safe(int hints[16], int grid[4][4], int pos, int num)
{
	int	col;
	int	row;

	col = pos % 4;
	row = pos / 4;
	if (!(ft_checkcolrow(grid, col, row, num)))
		return (0);
	if (ft_checkhints(hints, grid, pos, num))
		return (1);
	return (0);
}

int	ft_solve_puzzle(int hints[16], int grid[4][4], int pos)
{
	int	num;
	int	col;
	int	row;

	num = 1;
	col = pos % 4;
	row = pos / 4;
	if (pos == 16)
		return (1);
	while (num <= 4)
	{
		if (ft_is_safe(hints, grid, pos, num))
		{
			grid[row][col] = num;
			if (ft_solve_puzzle(hints, grid, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
