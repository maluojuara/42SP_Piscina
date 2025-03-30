/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:30:39 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:29:26 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_dict(char *file, t_key_value_pair	**dict)
{
	int					fd;
	int					lines_count;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict error\n");
		return (1);
	}
	lines_count = count_lines(fd);
	close(fd);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict error\n");
		return (1);
	}
	*dict = new_dict(lines_count);
	if (read_lines(*dict, fd))
		return (1);
	close(fd);
	return (0);
}
