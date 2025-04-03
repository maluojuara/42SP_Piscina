/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:10:29 by malcosta          #+#    #+#             */
/*   Updated: 2025/04/02 18:12:25 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

// typedef struct s_stock_str{
// 	int size;
// 	char *str;
// 	char *copy;
// }	t_stock_str;

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*struct_arr;
	int			size_alloc;

	size_alloc = (ac + 1) * sizeof(t_stock_str);
	struct_arr = malloc(size_alloc);
	if (!struct_arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		struct_arr[i].size = ft_strlen(av[i]);
		struct_arr[i].str = av[i];
		struct_arr[i].copy = ft_strdup(av[i]);
		if (!struct_arr[i].copy)
			return (NULL);
		i++;
	}
	struct_arr[i].size = 0;
	struct_arr[i].str = 0;
	struct_arr[i].copy = 0;
	return (struct_arr);
}
