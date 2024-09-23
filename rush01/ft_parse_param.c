/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:54:39 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 20:48:18 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_parse_help(char *str, int *hints, int i, int *j)
{
	int	space_flag;

	space_flag = 2;
	while (str[i])
	{
		if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
			return (0);
		else if (str[i] != ' ' && space_flag == 2)
		{
			hints[*j] = str[i] - 48;
			*j = *j + 1;
			space_flag = 1;
		}
		else if (str[i] != ' ' && space_flag == 1)
			return (0);
		else if (str[i] == ' ' && space_flag == 2)
			return (0);
		else
			space_flag = 2;
		i++;
	}
	if (!(*j == 16))
		return (0);
	return (1);
}

int	ft_parse_param(char *str, int *hints)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(*str))
		return (0);
	if (!(ft_parse_help(str, hints, i, &j)))
		return (0);
	return (1);
}
