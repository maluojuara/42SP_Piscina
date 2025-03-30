/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:23:30 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:35:47 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	count_lines(int fd)
{
	int		lines_count;
	int		bytes_read;
	char	buffer[10];
	char	*ptr;

	ft_initialize_char(buffer, 10);
	lines_count = 0;
	bytes_read = 0;
	bytes_read = read(fd, buffer, 9);
	while (bytes_read)
	{
		buffer[bytes_read] = '\0';
		ptr = buffer;
		while (*ptr)
		{
			if (*ptr == '\n' )
				lines_count++;
			ptr++;
		}
		bytes_read = read(fd, buffer, 9);
	}
	return (lines_count);
}
