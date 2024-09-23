/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:19:31 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 12:57:06 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*int main(void)
{
	char dest[50] = "Hello, ";  // Destination string with enough space
	char src[] = "World!";      // Source string to be concatenated
	unsigned int nb = 3;        // Number of characters to append from src
	int i = 0;

	ft_strncat(dest, src, nb);  

	
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}

	write(1, "\n", 1);

	return 0;
}*/
