/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:53:16 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 11:03:36 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// #include<stdio.h>

// int main () {
// 	char *num = "124";
// 	char *alpha = "abcd";
// 	char *mix ="abc09*";
// 	char *simb ="09*";
// 	printf("%d\n", ft_str_is_numeric(num));
// 	printf("%d\n", ft_str_is_numeric(alpha));
// 	printf("%d\n", ft_str_is_numeric(simb));
// 	printf("%d\n", ft_str_is_numeric(mix));
// }