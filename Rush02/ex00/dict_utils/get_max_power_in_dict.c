/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_power_in_dict.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:04:13 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 08:12:14 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_max_power_in_dict(t_key_value_pair *dict)
{
	int	max_power;
	int	power;

	max_power = 0;
	while (dict->key)
	{
		if (ft_is_power(dict->key, ft_strlen(dict->key) - 1))
		{
			power = ft_strlen(dict->key) - 1;
			if (power > max_power)
				max_power = power;
		}
		dict++;
	}
	return (max_power);
}
