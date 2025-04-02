/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:11:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/23 17:13:37 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// #include <stdio.h>

// int	main ()
// {
// 	char *string = "malu";
// 	printf("o tamanho da string eh: %d\n", ft_strlen(string));
// }