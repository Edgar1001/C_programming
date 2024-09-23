/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:13:21 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 12:45:53 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main() 
{
    printf("%d\n", ft_strcmp("hello", "hello"));   
    printf("%d\n", ft_strcmp("apple", "banana"));  
    printf("%d\n", ft_strcmp("world", "worlds"));  
    printf("%d\n", ft_strcmp("abc", "abd"));       
    printf("%d\n", ft_strcmp("xyz", "xy"));   

    return 0;
}*/
