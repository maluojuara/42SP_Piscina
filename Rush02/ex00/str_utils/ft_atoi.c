/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:55:25 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 07:56:11 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_atoi(char *str)
{
	int	acumulator;

	acumulator = 0;
	while (*str)
	{
		acumulator = acumulator * 10 + (*str - '0');
		str++;
	}
	return (acumulator);
}
