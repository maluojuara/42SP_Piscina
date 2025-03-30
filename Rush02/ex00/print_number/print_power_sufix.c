/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_power_sufix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:31:25 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 20:17:24 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_power_sufix(t_key_value_pair *dict, int power)
{
	if (power > 0)
	{
		while (dict->key)
		{
			if (ft_is_power(dict->key, power))
			{
				ft_putstr(dict->value);
				ft_putstr(" ");
				return ;
			}
			dict++;
		}
	}
}
