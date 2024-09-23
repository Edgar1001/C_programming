/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:25:28 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 10:50:43 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main() {
    int nb, power;

    
    nb = 2;
    power = 3;
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power)); 

    nb = 5;
    power = 0;
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power)); 

    nb = 3;
    power = -2;
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power)); 

    nb = 0;
    power = 5;
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power)); 

    nb = 0;
    power = 0;
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power)); 

    return 0;
}*/
