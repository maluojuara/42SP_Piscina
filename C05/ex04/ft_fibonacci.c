/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:59:16 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/31 14:55:37 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

/*
#include <stdio.h>

 int	main (void)
 {
 	printf("%i", ft_fibonacci(5));
 	return (0);
 } */
