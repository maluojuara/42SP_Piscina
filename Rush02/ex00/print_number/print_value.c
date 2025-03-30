/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:26:00 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 20:16:03 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_value(t_key_value_pair *dict, char *key, int last)
{
	(void) last;
	while (dict->key)
	{
		if (ft_strcmp(dict->key, key) == 0)
		{
			ft_putstr(dict->value);
			ft_putstr(" ");
			return ;
		}
		dict++;
	}
}
