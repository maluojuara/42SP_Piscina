/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:42:33 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:30:23 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	print_number(t_key_value_pair *dict, char *str, int last)
{
	int	len;

	len = ft_strlen(str);
	if (ft_strcmp(str, "0") == 0)
		print_value(dict, "0", last);
	print_groups(dict, str, len);
	return (0);
}
