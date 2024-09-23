/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:12:54 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 16:02:32 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}
/*int main()
{
    ft_putnbr(42);    
    write(1, "\n", 1);
    
    ft_putnbr(-2147483648);  

    ft_putnbr(0);     
    write(1, "\n", 1);

    ft_putnbr(-1234); 
    write(1, "\n", 1);

    return 0;
}*/