/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:09:41 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 08:12:40 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_has_key(t_key_value_pair *dict, char *key)
{
	while (dict->key)
	{
		if (ft_strcmp(key, dict->key) == 0)
			return (1);
		dict++;
	}
	return (0);
}
