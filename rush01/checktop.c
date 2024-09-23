/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:18:44 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:32:49 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_count_visible_top(int grid[4][4], int col)
{
	int	visible_count;
	int	max_height;
	int	row;

	visible_count = 0;
	max_height = 0;
	row = 0;
	while (row < 4)
	{
		if (grid[row][col] != 0)
		{
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		row++;
	}
	return (visible_count);
}

int	ft_checktop(int hints[16], int grid[4][4], int col)
{
	int	visible_count;
	int	hint;
	int	row;
	int	filled_cells;

	visible_count = ft_count_visible_top(grid, col);
	hint = hints[col];
	row = 0;
	filled_cells = 0;
	while (row < 4)
	{
		if (grid[row][col] != 0)
			filled_cells++;
		row++;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}
