/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:13:21 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 11:04:57 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*int main() {
    int nb, power;
    nb = 2;
    power = 3;
    printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power)); 

    nb = 5;
    power = 0;
    printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power)); 

    nb = 3;
    power = -2;
    printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power)); 

    return 0;
}*/
