/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:35:24 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 07:41:23 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*alloc_memmory(int n);

char	*ft_to_string(int n)
{
	char	*str;

	str = alloc_memmory(n);
	if (!str)
		return (0);
	if (n >= 100)
	{
		str[0] = (n / 100) + '0';
		str[1] = ((n / 10) % 10) + '0';
		str[2] = (n % 10) + '0';
		str[3] = '\0';
	}
	else if (n >= 10)
	{
		str[0] = (n / 10) + '0';
		str[1] = (n % 10) + '0';
		str[2] = '\0';
	}
	else
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

char	*alloc_memmory(int n)
{
	if (n >= 100)
		return (malloc(4));
	else if (n >= 10)
		return (malloc(3));
	else
		return (malloc(2));
}
