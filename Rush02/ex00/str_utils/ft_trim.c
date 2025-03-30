/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:22:33 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 07:25:12 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_trim(char *str)
{
	char	*start;
	char	*end;
	char	*dest;

	start = str;
	while (ft_is_space(*start))
		start++;
	if (*start == '\0')
	{
		*str = '\0';
		return ;
	}
	end = start;
	while (*end)
		end++;
	end--;
	while (ft_is_space(*end))
		end--;
	dest = str;
	while (start <= end)
		*dest++ = *start++;
	*dest = '\0';
}
