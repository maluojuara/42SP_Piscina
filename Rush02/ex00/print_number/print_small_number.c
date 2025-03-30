/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_small_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:32:17 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:25:09 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_tens(t_key_value_pair *dict, int *nbrs, int n, int last);
void	print_hundreds(t_key_value_pair *dict, int *nbrs, int n, int last);

void	print_small_number(t_key_value_pair *dict, int n, int last)
{
	char	*key;
	int		nbrs[5];

	if (n == 0)
		return ;
	key = ft_to_string(n);
	if (ft_has_key(dict, key))
	{
		print_value(dict, key, 0);
		free(key);
		return ;
	}
	free(key);
	if (n < 100)
	{
		print_tens(dict, nbrs, n, last);
		return ;
	}
	print_hundreds(dict, nbrs, n, last);
}

void	print_tens(t_key_value_pair *dict, int *nbrs, int n, int last)
{
	char	*key;

	nbrs[0] = n / 10 * 10;
	nbrs[1] = n % 10;
	key = ft_to_string(nbrs[0]);
	print_value(dict, key, last);
	if (nbrs[1] > 0)
		print_small_number(dict, nbrs[1], last);
	free(key);
}

void	print_hundreds(t_key_value_pair *dict, int *nbrs, int n, int last)
{
	char	*key;

	nbrs[2] = n / 100;
	key = ft_to_string(nbrs[2]);
	print_value(dict, key, last);
	print_value(dict, "100", last);
	nbrs[3] = n % 100;
	if (nbrs[3] > 0)
		print_small_number(dict, nbrs[3], last);
	free(key);
}
