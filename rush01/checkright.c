/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkright.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:35:43 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:35:45 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_count_visible_right(int grid[4][4], int row)
{
	int	visible_count;
	int	max_height;
	int	col;

	visible_count = 0;
	max_height = 0;
	col = 3;
	while (col >= 0)
	{
		if (grid[row][col] != 0)
		{
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		col--;
	}
	return (visible_count);
}

int	ft_checkright(int hints[16], int grid[4][4], int row)
{
	int	visible_count;
	int	hint;
	int	col;
	int	filled_cells;

	visible_count = ft_count_visible_right(grid, row);
	hint = hints[row + 12];
	col = 3;
	filled_cells = 0;
	while (col >= 0)
	{
		if (grid[row][col] != 0)
			filled_cells++;
		col--;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}
