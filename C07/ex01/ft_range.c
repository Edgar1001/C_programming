/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:53:54 by erosende          #+#    #+#             */
/*   Updated: 2024/09/22 15:52:01 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>  
int main()
{
    int *range;
    int i;
    int min = 3;
    int max = 10;

    // Call ft_range to generate the array
    range = ft_range(min, max);

    // Check if the returned array is NULL (invalid range)
    if (range == NULL)
    {
        printf("Invalid range (min >= max)\n");
        return 1;
    }

    // Print the values in the range
    i = 0;
    while (i < max - min)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    // Free the allocated memory
    free(range);

    return 0;
}*/
