/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:53:57 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 10:43:50 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*int main()
{
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0));  
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));  
    printf("Factorial of 10: %d\n", ft_iterative_factorial(10)); 
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3)); 
    
    return 0;
}*/