/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_required_power_from_input.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:11:42 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 10:12:21 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_required_power_from_input(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len <= 3)
		return (0);
	return (((len - 1) / 3) * 3);
}
