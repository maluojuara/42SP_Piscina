/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:14:12 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:49:20 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_key_value_pair	*new_dict(int len)
{
	int					i;
	t_key_value_pair	*dict;

	i = 0;
	dict = malloc((len + 1) * sizeof(t_key_value_pair));
	if (!dict)
		return (0);
	while (i <= len)
		dict[i++] = (t_key_value_pair){0};
	return (dict);
}
