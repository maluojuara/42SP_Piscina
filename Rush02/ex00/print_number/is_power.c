/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:27:50 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 09:29:08 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_power(char *str, int power)
{
	int	count;

	if (str[0] != '1')
		return (0);
	str++;
	count = 0;
	while (*str)
	{
		if (*str != '0')
			return (0);
		count++;
		str++;
	}
	return (power == count);
}
