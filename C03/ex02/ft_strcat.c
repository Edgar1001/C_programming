/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:13:35 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 12:51:02 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*int main(void)
{
	char dest[50] = "Hello, ";  
	char src[] = "World!";     
	int i = 0;

	ft_strcat(dest, src);      

	// Print the concatenated string using write
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}

	
	write(1, "\n", 1);

	return 0;
}*/
