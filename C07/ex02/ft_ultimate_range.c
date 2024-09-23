/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:50:17 by erosende          #+#    #+#             */
/*   Updated: 2024/09/23 12:04:17 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*#include <stdio.h>

int main() {
    int *range;
    int size;
    int i;

    size = ft_ultimate_range(&range, 5, 10);

    if (size == -1) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Range size: %d\n", size);
    
    i = 0;
    while (i < size) {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    // Free allocated memory
    if (range != NULL) {
        free(range);
    }

    return 0;
}*/
