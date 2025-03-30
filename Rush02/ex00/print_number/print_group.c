/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_group.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:01:50 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:30:58 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_group(t_key_value_pair *dict, char *group, int power, int last)
{
	int	n;

	n = ft_atoi(group);
	if (n > 0)
	{
		print_small_number(dict, n, last);
		print_power_sufix(dict, power);
	}
}
