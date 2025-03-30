/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:58:35 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:27:39 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_valid_input(char *input)
{
	if (!ft_has_only_numbers(input))
	{		
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
