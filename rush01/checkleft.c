/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkleft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:39:30 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:39:31 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_count_visible_left(int grid[4][4], int row)
{
	int	visible_count;
	int	max_height;
	int	col;

	visible_count = 0;
	max_height = 0;
	col = 0;
	while (col < 4)
	{
		if (grid[row][col] != 0)
		{
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		col++;
	}
	return (visible_count);
}

int	ft_checkleft(int hints[16], int grid[4][4], int row)
{
	int	visible_count;
	int	hint;
	int	col;
	int	filled_cells;

	visible_count = ft_count_visible_left(grid, row);
	hint = hints[row + 8];
	col = 0;
	filled_cells = 0;
	while (col < 4)
	{
		if (grid[row][col] != 0)
			filled_cells++;
		col++;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}
