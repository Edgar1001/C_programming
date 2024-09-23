/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:12:37 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 15:42:06 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main()
{
    char str[] = "Hello, World!";  
    int length;

    length = ft_strlen(str);
    printf("The length of the string \"%s\" is: %d\n", str, length);

    return 0;
}*/
