/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:21:54 by erosende          #+#    #+#             */
/*   Updated: 2024/09/10 15:01:54 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int x = 42;
	int y = 5;

	printf("Before div/mod:\n");
	printf("x = %d, y = %d\n", x, y);

	ft_ultimate_div_mod(&x, &y);

	printf("After div/mod:\n");
	printf("x (division result) = %d\n", x);
	printf("y (modulo result) = %d\n", y);

	return 0;
}*/
