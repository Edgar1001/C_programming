/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:48:34 by erosende          #+#    #+#             */
/*   Updated: 2024/09/10 10:10:25 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int	main(void)
{
	int x = 10;
	int y = 20;

	printf("Before swap:\n");
	printf("x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("After swap:\n");
	printf("x = %d, y = %d\n", x, y);

	return 0;
}
*/
