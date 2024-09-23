/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolrow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:48:26 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:07:46 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_checkcol(int grid[4][4], int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkrow(int grid[4][4], int row, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkcolrow(int grid[4][4], int col, int row, int num)
{
	if (!(ft_checkcol(grid, col, num) && (ft_checkrow(grid, row, num))))
		return (0);
	return (1);
}
