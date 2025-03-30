/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_number_from_dict.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:07:53 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 08:08:50 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_max_number_from_dict(t_key_value_pair *dict)
{
	int	max_len;

	max_len = 0;
	while (dict->key)
	{
		if (ft_has_only_numbers(dict->key) && ft_strlen(dict->key) > max_len)
			max_len = ft_strlen(dict->key);
		dict++;
	}
	return (max_len);
}
