/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:53:11 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/31 16:03:13 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int	main (void)
// {
// 	int	*array_ints = NULL;
// 	int array_size = ft_ultimate_range(&array_ints, 2, 10);

// 	for (int i = 0; i < array_size; i++)
// 	{
// 		printf("%d, ", array_ints[i]);
// 	}
// 	printf("\ntamanho do meu array: %d", array_size);

// 	free(array_ints);
// 	return (0);
// }