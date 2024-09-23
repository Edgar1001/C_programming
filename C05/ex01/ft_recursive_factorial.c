/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:13:10 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 10:46:20 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*int main()
{
    // Test cases for the recursive factorial function
    printf("Factorial of 0: %d\n", ft_recursive_factorial(0));  
    printf("Factorial of 5: %d\n", ft_recursive_factorial(5));  
    printf("Factorial of 10: %d\n", ft_recursive_factorial(10)); 
    printf("Factorial of -3: %d\n", ft_recursive_factorial(-3)); 
    return 0;
}*/
