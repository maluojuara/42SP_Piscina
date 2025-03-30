/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_key_value_pair.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 08:19:15 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:49:08 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	new_key_value_pair(char *line, t_key_value_pair **cursor)
{
	char	*key;
	char	*value;
	int		is_valid;

	is_valid = is_valid_line(line);
	if (is_valid == 0)
		return (0);
	else if (is_valid < 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	key = get_key(line);
	value = get_value(line);
	(*cursor)->key = key;
	(*cursor)->key_len = ft_strlen(key);
	(*cursor)->value = value;
	(*cursor)++;
	return (0);
}

char	*get_key( char *line )
{
	int		index;
	char	*key;

	index = ft_index_of(line, ':');
	key = malloc(sizeof(char) * (index + 1));
	ft_strncpy(key, line, index);
	key[index] = '\0';
	ft_trim(key);
	return (key);
}

char	*get_value(char *line)
{
	char	*start;
	int		index;
	char	*value;

	start = &line[ft_index_of(line, ':') + 1];
	index = ft_strlen(start);
	value = malloc(sizeof(char) * (index + 1));
	ft_strncpy(value, start, index);
	value[index] = '\0';
	ft_trim(value);
	return (value);
}

int	is_valid_line(char *line)
{
	if (ft_has_only_spaces(line))
		return (0);
	else
	{
		if (!(*line >= '0' && *line <= '9'))
			return (-1);
		while (*line >= '0' && *line <= '9')
			line++;
		while (ft_is_space(*line))
			line++;
		if (*line != ':')
			return (-1);
		else
			line++;
		while (ft_is_space(*line))
			line++;
		if (!(*line >= ' ' && *line <= '~'))
			return (-1);
	}
	return (1);
}
