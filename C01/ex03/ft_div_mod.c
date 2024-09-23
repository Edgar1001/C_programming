/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:21:42 by erosende          #+#    #+#             */
/*   Updated: 2024/09/09 14:44:31 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int a = 42;
	int b = 5;
	int division;
	int modulo;

	ft_div_mod(a, b, &division, &modulo);

	printf("For a = %d and b = %d:\n", a, b);
	printf("Division result: %d\n", division);
	printf("Modulo result: %d\n", modulo);

	return 0;
}
*/
