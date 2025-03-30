/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:26:00 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 07:26:56 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_index_of(char *ptr, char end)
{
	int	index;

	index = 0;
	while (*ptr != end)
	{
		index++;
		ptr++;
	}
	return (index);
}
