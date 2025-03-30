/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_groups.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:05:34 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 20:17:38 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_group(int i, char *str, int *end)
{
	char	*group;

	if (i == 0)
	{
		group = ft_slice(str, 0, *end);
	}
	else
	{
		group = ft_slice(str, *end, *end + 3);
		*end += 3;
	}
	return (group);
}

void	print_groups(t_key_value_pair *dict, char *str, int len)
{
	int		i;
	int		end;
	int		number_of_groups;
	char	*group;

	i = 0;
	number_of_groups = (len + 2) / 3;
	end = len % 3;
	if (end == 0)
		end = 3;
	while (i < number_of_groups)
	{
		group = get_group(i, str, &end);
		print_group(
			dict,
			group,
			((number_of_groups - 1 - i) * 3),
			i == (number_of_groups - 1));
		free(group);
		i++;
	}
	ft_putstr("\n");
}
