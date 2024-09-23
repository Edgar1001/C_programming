/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:30:55 by erosende          #+#    #+#             */
/*   Updated: 2024/09/15 12:59:15 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "World";
	char *result;

	result = ft_strstr(str, to_find);

	// Print the result if found
	if (result)
	{
		int i = 0;
		while (result[i] != '\0')
		{
			write(1, &result[i], 1);
			i++;
		}
	}
	else
	{
		write(1, "Not found", 9);
	}

	write(1, "\n", 1);

	return 0;
}*/
