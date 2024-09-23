/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:05:32 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/15 19:52:34 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>

void	print_char(int *row)
{
	int		i;
	int		count;
	char	num;

	i = 0;
	count = 1;
	while (i < 4)
	{
		num = row[i] + '0';
		write(1, &num, 1);
		if (!(count == 4))
		{
			write(1, " ", 1);
			count++;
		}
		i++;
	}
}

void	ft_print_grid(int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		print_char(&grid[i][0]);
		write(1, "\n", 1);
		i++;
	}
}
