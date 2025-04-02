/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:03:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/04/01 19:35:40 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// regra matemática que para testar se um numero é primo, 
// nao precisa testar todos, dá pra testar ate a raiz quadrada 
// do numero. ou seja, ate o numero que elevado ao quadrado de n
// entao i^2 (i *  i) <= nb. porque se for maior, ja passou. 
// limita a busca.

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main (void)
// {
// 	int a = 2233761771;

// 	printf("%i", ft_is_prime(a));
// }