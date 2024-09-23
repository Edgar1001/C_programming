/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:34:16 by erosende          #+#    #+#             */
/*   Updated: 2024/09/09 08:28:28 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{										
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{	
		write(1, &letter, 1);
		letter++;
	}
}
