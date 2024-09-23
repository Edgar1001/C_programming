/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:38:19 by erosende          #+#    #+#             */
/*   Updated: 2024/09/22 16:36:32 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src != '\0') 
	*dest++ = *src++;
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len; 
	int		i;
	char	*result, *current_pos;

	total_len = 0;
	i = 0;
	if (size == 0) 
	return ((char *)malloc(1));
	while (i < size)
	total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(total_len + 1);
	if (!result)
	return (NULL);
	current_pos = result;
	i = 0;
	while (i < size)
	{
		ft_strcpy(current_pos, strs[i]);
		current_pos += ft_strlen(strs[i]);
		if (i++ < size - 1)
		ft_strcpy(current_pos, sep);
		current_pos += ft_strlen(sep);
	}
	*current_pos = '\0';
	return (result);
}
#include <stdio.h>

int main(void)
{
	char *strs[] = {"Hello", "World", "42", "!"};
	char *sep = ", ";
	char *result;

	result = ft_strjoin(4, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}
