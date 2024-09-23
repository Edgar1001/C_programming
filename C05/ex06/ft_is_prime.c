/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:28:56 by erosende          #+#    #+#             */
/*   Updated: 2024/09/18 10:57:22 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*int main()
{
    printf("Is 2 prime? %d\n", ft_is_prime(2));     // Output: 1 (True)
    printf("Is 3 prime? %d\n", ft_is_prime(3));     // Output: 1 (True)
    printf("Is 4 prime? %d\n", ft_is_prime(4));     // Output: 0 (False)
    printf("Is 17 prime? %d\n", ft_is_prime(17));   // Output: 1 (True)
    printf("Is 25 prime? %d\n", ft_is_prime(25));   // Output: 0 (False)
    printf("Is 97 prime? %d\n", ft_is_prime(97));   // Output: 1 (True)
    printf("Is 100 prime? %d\n", ft_is_prime(100)); // Output: 0 (False)

    return 0;
}*/
