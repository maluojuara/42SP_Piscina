/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:50:07 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 07:53:47 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_slice(char *str, int start, int end)
{
	int		i;
	int		len;
	int		slice_len;
	char	*result;

	if (!str || start < 0 || end < 0 || start >= end)
		return (0);
	len = ft_strlen(str);
	if (start >= len)
		return (0);
	if (end > len)
		end = len;
	slice_len = end - start;
	result = malloc(slice_len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < slice_len)
	{
		result[i] = str[start + i];
		i++;
	}
	result[slice_len] = '\0';
	return (result);
}
