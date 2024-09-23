/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:13:29 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 12:49:00 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*int main() {
    printf("%d\n", ft_strncmp("hello", "hello", 3));   
    printf("%d\n", ft_strncmp("hello", "hell", 5));    
    printf("%d\n", ft_strncmp("apple", "banana", 3));  
    printf("%d\n", ft_strncmp("abcdef", "abcxyz", 3)); 
    printf("%d\n", ft_strncmp("abcdef", "abcxyz", 6));

    return 0;
}*/
