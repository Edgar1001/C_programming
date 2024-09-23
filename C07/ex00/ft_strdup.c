/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:30:46 by erosende          #+#    #+#             */
/*   Updated: 2024/09/23 11:00:06 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>   
#include <stdlib.h>  

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dup_str;

	i = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dup_str = (char *)malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
int main()
{
    char source[] = "Hello, world!";
    
    // Call ft_strdup to duplicate the string
    char *duplicated = ft_strdup(source);

    // Check if memory allocation succeeded
    if (duplicated == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Print the original and duplicated strings
    printf("Original string: %s\n", source);
    printf("Duplicated string: %s\n", duplicated);

    // Free the allocated memory
    free(duplicated);

    return 0; // Success
}