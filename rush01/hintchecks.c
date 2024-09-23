/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hintchecks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:46:34 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 23:20:46 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_checkhicol(int hints[16], int grid[4][4], int col)
{
	if (!(ft_checktop(hints, grid, col)))
		return (0);
	if (!(ft_checkbottom(hints, grid, col)))
		return (0);
	return (1);
}

int	ft_checkhirow(int hints[16], int grid[4][4], int row)
{
	if (!(ft_checkleft(hints, grid, row)))
		return (0);
	if (!(ft_checkright(hints, grid, row)))
		return (0);
	return (1);
}
