/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:51:39 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 10:51:40 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// #include<stdio.h>

// int main () {
// 	char *alpha = "abcd";
// 	char *mix ="abc09*";
// 	char *simb ="09*";
// 	printf("%d\n", ft_str_is_alpha(alpha));
// 	printf("%d\n", ft_str_is_alpha(simb));
// 	printf("%d\n", ft_str_is_alpha(mix));
// }
