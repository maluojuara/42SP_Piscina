/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:02:31 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/31 12:35:39 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sub;
	int	n_calc;

	i = 1;
	sub = 0;
	n_calc = nb;
	while (n_calc - i >= 0)
	{
		n_calc = n_calc - i;
		i += 2;
		sub++;
	}
	if (sub * sub == nb)
		return (sub);
	else
		return (0);
}

// #include <stdio.h>

// int	main (void)
// {
// 	int a = ft_sqrt(36);
// 	printf("%i", a);
// 	return (0);
// }