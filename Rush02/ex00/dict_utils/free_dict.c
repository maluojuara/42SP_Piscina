/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:11:41 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:45:34 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_dict(t_key_value_pair *dict)
{
	t_key_value_pair	*cursor;

	cursor = dict;
	while (cursor->key)
	{
		free(cursor->key);
		free(cursor->value);
		cursor++;
	}
	free(dict);
}
