/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:14:15 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 10:55:11 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main()
{
    int number = 16;  
    int result = ft_sqrt(number);

    if (result == 0)
        printf("The number %d does not have an integer square root.\n", number);
    else
        printf("The square root of %d is: %d\n", number, result);

    return 0;
}*/
